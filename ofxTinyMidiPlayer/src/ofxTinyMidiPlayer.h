#pragma once

#include "ofMain.h"
#include "ofxTinyMidiSoundFont.h"
#include "tml.h"

struct ofxTinyMidiFileInfo {
	int used_channels = 0;
	int used_programs = 0;
	int total_notes = 0;
	unsigned int time_first_note = 0;
	unsigned int time_length_ms = 0;
};

class ofxTinyMidiPlayer {
public:
	void load(string mid_file_name);
	void release();	// Free resources

	// Play loaded MIDI file
	virtual void play();
	void stop(ofxTinyMidiSoundFont& soundFont);

	ofxTinyMidiFileInfo getInfo();
	int getPlayngPositionMilliseconds();

	// Audio callback
	// Safe - locks own and soundFont resources.
	// By default mixing if off, it means replacing values in output (if 1 then adding to output)
	void audioOut(ofSoundBuffer& output, ofxTinyMidiSoundFont& soundFont, int flagMixing);

	// Special settings
	// Size of audio chunks on which MIDI events are sent.
	// Higher values give more stability, less values give more accurate playing.
	void setAudioChunkSize(int chunkSizePerMIDIEvents);
	int audioChunkSize();

	// Mutex
	mutex& mut() { return mutex_; }
protected:
	mutex mutex_;
	bool loaded_ = false;
	tml_message* firstMessage_ = nullptr;		// Start of MIDI data represented as a linked list 
	static const int audioChannels_ = 2;

	bool playing_ = false;
	tml_message* player_message_ = nullptr;		// Next message to be played

	// Current playback time   
	// TODO make it std::atomic<double> for safety because of reading it in getPlayngPositionMilliseconds
	double player_msec_ = 0;		
	
	// Settings
	int chunkSizePerMIDIEvents_ = 64;

	// File Info
	ofxTinyMidiFileInfo info_;
};
