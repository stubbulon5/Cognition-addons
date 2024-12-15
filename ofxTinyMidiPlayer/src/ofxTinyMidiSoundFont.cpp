#include "ofxTinyMidiSoundFont.h"

// Putting TinySoundFont implementation here (can't do it in h-file):
#define TSF_IMPLEMENTATION
#include "tsf.h"

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::load(string sf2_file_name, float volumeDb, int sampleRate)
{
	if (loaded_) {
		release();
	}

	ofxTinyMidiLock locker(mutex_);	// Lock resources

	sf2_file_name = ofToDataPath(sf2_file_name);
	// Load the SoundFont from a file
	auto* soundFont = tsf_load_filename(sf2_file_name.c_str());
	loaded_ = (soundFont != nullptr);
	if (!loaded_)
	{
		cout << "Could not load SoundFont " << sf2_file_name << endl;
		return;
	}
	cout << "Loaded SoundFont '" << sf2_file_name << "'" << endl;
	soundFont_ = soundFont;

	// Set the SoundFont rendering output mode and volume		
	tsf_set_output(soundFont_, TSF_STEREO_INTERLEAVED, sampleRate, volumeDb);
	sampleRate_ = sampleRate;

	wasAudioClipping_ = false;
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::release()
{
	if (loaded_) {
		ofxTinyMidiLock locker(mutex_);	// Lock resources
		loaded_ = false;
		tsf_close(soundFont_);
		soundFont_ = nullptr;
		sampleRate_ = 0;
	}
}

//--------------------------------------------------------------
string ofxTinyMidiSoundFont::instrumentNameUnsafe(int i)
{
	const char* pName = tsf_get_presetname(soundFont_, i);
	if (pName) return pName;
	return "";
}

//--------------------------------------------------------------
bool ofxTinyMidiSoundFont::wasAudioClipping()
{
	bool clipping = wasAudioClipping_;
	wasAudioClipping_ = false;
	return clipping;
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::audioOut(ofSoundBuffer& output, int flagMixing)
{
	ofxTinyMidiLock locker(mutex_);	// Lock resources - for checking "loaded_" and further

	if (!loaded_) {
		// Fill the output buffer by zeros to avoid random clicks
		if (!flagMixing) {
			output.set(0);
		}
		return;
	}

	if (output.size() == 0) return;

	if (output.getNumChannels() != audioChannels_) {
		cout << "ofxTinyMidiSoundFont::audioOut error: expected " << audioChannels_ << " channels in the buffer" << endl;
		output.set(0);
		return;
	}

	int sampleCount = output.size() / audioChannels_;
	renderFloatUnsafe(output.getBuffer().data(), sampleCount, flagMixing);
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::renderFloatUnsafe(float* outputStereo, int nStereoSamples, int flagMixing)
{
	if (!outputStereo) {
		cout << "ofxTinyMidiSoundFont::renderFloatNoLock - null outputStereo" << endl;
		return;
	}
	if (!loaded_) {
		if (!flagMixing) {
			for (int i = 0; i < nStereoSamples * 2; i++) {
				outputStereo[i] = 0.0f;
			}
		}
		return;
	}
	tsf_render_float(soundFont_, outputStereo, nStereoSamples, flagMixing);
	
	// Check audio clipping
	for (int i = 0; i < nStereoSamples * 2; i++) {
		if (outputStereo[i] <= -1 || outputStereo[i] >= 1) {
			wasAudioClipping_ = true;
		}
	}
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::channelSetProgramUnsafe(int channel, int program)
{
	if (!loaded_) {
		return;
	}
	// "== 9" is a special check for drum channel
	tsf_channel_set_presetnumber(soundFont_, channel, program, (channel == 9));
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::noteOnUnsafe(int channel, int key, int velocity)
{
	if (!loaded_) {
		return;
	}
	tsf_channel_note_on(soundFont_, channel, key, velocity / 127.0f);
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::noteOffUnsafe(int channel, int key)
{
	if (!loaded_) {
		return;
	}
	tsf_channel_note_off(soundFont_, channel, key);
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::pitchBendUnsafe(int channel, int pitchBendNoLock)
{
	if (!loaded_) {
		return;
	}
	tsf_channel_set_pitchwheel(soundFont_, channel, pitchBendNoLock);
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::controlChangeUnsafe(int channel, int control, int controlValue)
{
	if (!loaded_) {
		return;
	}
	tsf_channel_midi_control(soundFont_, channel, control, controlValue);
}

//--------------------------------------------------------------
void ofxTinyMidiSoundFont::stopAllNotes()
{
	if (!loaded_) {
		return;
	}
	ofxTinyMidiLock locker(mutex_);
	tsf_reset(soundFont_);

}
//--------------------------------------------------------------
