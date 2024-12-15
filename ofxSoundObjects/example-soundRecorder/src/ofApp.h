#pragma once

#include "ofMain.h"
#include "ofxSoundObjects.h"
#include "waveformDraw.h"
#include "ofxSoundRecorderObject.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
	
	waveformDraw wave;
	ofxSoundInput input;
	ofxSoundOutput output;
	ofSoundStream stream;
	ofxSoundMixer mixer;
	
	
	
	ofxSoundRecorderObject recorder;

	
	//this will keep a listener so we can know that the recording has ended and its resources are free so it is safe to use the recently recorded file.
	
	ofEventListener recordingEndListener;
	void recordingEndCallback(string & filepath);
	
};
