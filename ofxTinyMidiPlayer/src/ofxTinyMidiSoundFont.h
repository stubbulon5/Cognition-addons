#pragma once

#include "ofMain.h"
#include "tsf.h"

class ofxTinyMidiSoundFont {
public:
	void load(string sf2_file_name, float volumeDb = 0, int sampleRate = 44100);
	void release();			// Free resources
	void stopAllNotes();	// Stopping all notes
	
	string instrumentNameUnsafe(int i);
	int sampleRate() { return sampleRate_; }

	mutex& mut() { return mutex_; }	// Mutex for locking resources

	bool wasAudioClipping();	// returns if was audio clipping after last call of wasAudioClipping

	//---------------------------------------
	// Audio
	//---------------------------------------
	// Audio callback
	// Safe - locks resources.
	// This is higher-level audio generation, with resource locking
	// To generate with MIDI - use ofxTinyMidiPlayer::audioOut with 
	// By default mixing if off, it means replacing values in output (if 1 then adding to output)
	void audioOut(ofSoundBuffer& output, int flagMixing = 0);

	// Rendering audio to a buffer
	// Unsafe - not locks resources.
	void renderFloatUnsafe(float* outputStereo, int nStereoSamples, int flagMixing = 0);

	//---------------------------------------
	// Control events
	//---------------------------------------
	// It can be called from MIDI player or manually.
	// Unsafe - not lock resources. When calling events from non-audio thread, 
	// need to lock resources by calling the following:
	//    ofxTinyMidiLock lock(soundFont); 
	// Then inside scope of this "lock" object resources will be locked
	void channelSetProgramUnsafe(int channel /*0..15*/, int program);
	void noteOnUnsafe(int channel, int key, int velocity /*0..127*/);
	void noteOffUnsafe(int channel, int key);
	void pitchBendUnsafe(int channel, int pitchBendNoLock);
	void controlChangeUnsafe(int channel, int control, int controlValue);

private:
	mutex mutex_;
	int sampleRate_ = 0;
	bool loaded_ = false;
	static const int audioChannels_ = 2;

	tsf* soundFont_ = nullptr;

	bool wasAudioClipping_ = false;
};


// Conditional locker, enables mutex if required
// Locks in its visibility area until destroying
class ofxTinyMidiLock {
public:
	ofxTinyMidiLock(mutex& mut) : lock_(mut) {}
	ofxTinyMidiLock(ofxTinyMidiSoundFont& soundFont) : lock_(soundFont.mut()) {}
private:
	lock_guard<mutex> lock_;
};