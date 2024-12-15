#pragma once

#include "ofMain.h"
#include "ofxSoundObjects.h"
#include "ofxSoundObjectMatrixMixerRenderer.h"

class ofApp : public ofBaseApp{
	
public:
	void setup();
	void update();
	void draw();
	void exit();
	
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
	
	ofSoundStream stream;

	ofxSoundMatrixMixer mixer;
	ofxSoundMatrixMixerRenderer mixerRenderer;

	ofxSoundInput input;
	
	vector<shared_ptr<ofxSoundPlayerObject>> players;
	
	
	size_t inDeviceIndex, outDeviceIndex;
		
	string mixerSettingsXmlPath;
	bool bSettingsLoaded = false;
	
	string loadPath;
	
	void loadFolder(const string& path, bool bReload);

	int selectedConnection = 0;
	int selectedChannel = 0;
	
};
