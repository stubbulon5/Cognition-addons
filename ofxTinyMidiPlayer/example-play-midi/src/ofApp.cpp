#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);

	// Load sound font
	float volumeDb = -4;	// Volume - decrease if audio clipping occurs
	soundFont_.load("gm.sf2", volumeDb);

	// Load MIDI file
	mid_file_name_ = "Joy Division - Transmission.mid";
	midiPlayer_.load(mid_file_name_);
	info_ = midiPlayer_.getInfo();

	// Start audio stream
	setupSoundStream();

	// Start playing MIDI
	midiPlayer_.play();
}

//--------------------------------------------------------------
void ofApp::setupSoundStream()
{
	cout << "Starting audio output" << endl;
	// Api: 
	// DEFAULT
	// MS_WASAPI /*!< The Microsoft WASAPI API. */
	// MS_ASIO   /*!< The Steinberg Audio Stream I/O API. */
	// MS_DS     /*!< The Microsoft Direct Sound API. */

	ofSoundDevice::Api API = //ofSoundDevice::Api::MS_ASIO  // Use this for ASIO sound card for the better responsibilty, SR 44100, buffer 64, buffers 2
		ofSoundDevice::Api::MS_DS;  // Use this for internal sound card, then need buffer 128, buffers 4

	auto devices = soundStream_.getDeviceList(API);
	//auto devices = soundStream_.getMatchingDevices("default");
	cout << devices << endl;
	if (devices.empty()) {
		cout << "No sound devices" << endl;
	}
	else {

		//settings.setInDevice(devices[0]);
		auto& device = devices[0];
		if (device.outputChannels == 0 && device.sampleRates.empty()) {
			ofSystemAlertDialog("Can't initialize output device " + device.name);
			_exit(0);
		}

		ofSoundStreamSettings settings;
		settings.setApi(API);
		settings.setOutDevice(device);

		settings.setOutListener(this);
		settings.sampleRate = 44100;
		settings.numOutputChannels = device.outputChannels;
		settings.numInputChannels = 0; //device.inputChannels;
		settings.bufferSize = 512;
		settings.numBuffers = 4;
		soundStream_.setup(settings);
	}
}

//--------------------------------------------------------------
void ofApp::exit() {
	midiPlayer_.release();
	soundStream_.close();
	soundFont_.release();
}

//--------------------------------------------------------------
void ofApp::audioOut(ofSoundBuffer& output) {
	// expected 2 channels
	if (output.getNumChannels() != 2) {
		cout << "ofApp::audioOut - expected stereo buffer" << endl;
		return;
	}

	int flagMixing = 0;
	midiPlayer_.audioOut(output, soundFont_, flagMixing);
}

//--------------------------------------------------------------
void ofApp::update() {
	// Monitoring audio clipping
	if (ofGetFrameNum() % 30 == 0) {
		wasClipping_ = wasClipping_ || soundFont_.wasAudioClipping();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(64);
	ofSetColor(255);

	ofDrawBitmapString("Playing MIDI '" + mid_file_name_ + "'", 30, 30);
	ofDrawBitmapString("Position: " + ofToString(midiPlayer_.getPlayngPositionMilliseconds()/1000)
		+ " / " + ofToString(info_.time_length_ms / 1000) + " sec", 30, 60);

	// Audio clipping monitoring
	if (!wasClipping_) {
		ofDrawBitmapStringHighlight("No audio clipping", 30, 90, ofColor(0, 0), ofColor(255));
	}
	else {
		ofDrawBitmapStringHighlight("Audio clipping was detected. Consider to decrease volumeDb", 30, 90, ofColor(0, 0), ofColor(255, 64, 64));
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
