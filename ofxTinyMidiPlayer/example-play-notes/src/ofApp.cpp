#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	pressedNotes_.resize(128);

	// Load sound font
	float volumeDb = -4; 
	soundFont_.load("gm.sf2", volumeDb); 	// Volume - decrease if audio clipping occurs. See soundFont_.wasAudioClipping() and example-play-midi

	// Choose some instrument
	setInstrument(currentInstrument_);

	// Start audio stream
	setupSoundStream();
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
	soundFont_.audioOut(output, flagMixing);
 }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(64);
	ofSetColor(255);

	ofDrawBitmapString("Playing notes with sound font\n\n"
		"Press 1..9 to play a note\n"
		"      q..p to change instrument", 30, 30);
	
	ofDrawBitmapString("Instrument: " + ofToString(currentInstrument_) + " - " + soundFont_.instrumentNameUnsafe(currentInstrument_), 30, 100);
}

//--------------------------------------------------------------
void ofApp::setInstrument(int instr)
{
	ofxTinyMidiLock lock(soundFont_);	// Lock resources
	soundFont_.channelSetProgramUnsafe(0, instr);
	currentInstrument_ = instr;
}

//--------------------------------------------------------------
void ofApp::noteOn(int note)
{
    // Note: we enable and disable notes by locking resources, 
    // it's simple, but latency is a large.
    // For faster performance, implement starting notes right inside 
    // custom audioOut function as in "example-play-midi" example project.
	if (!pressedNotes_[note])
	{
		pressedNotes_[note] = 1;
		ofxTinyMidiLock lock(soundFont_);	// Lock resources
		int velocity = 100;	// Maximum 127
		soundFont_.noteOnUnsafe(0, note, velocity);
	}
}

//--------------------------------------------------------------
void ofApp::noteOff(int note)
{
	if (pressedNotes_[note])
	{
		pressedNotes_[note] = 0;
		ofxTinyMidiLock lock(soundFont_);	// Lock resources
		soundFont_.noteOffUnsafe(0, note);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// 1..9 - play note
	// q..p - change instrument
	if (key == 'q') setInstrument(0);
	if (key == 'w') setInstrument(1);
	if (key == 'e') setInstrument(2);
	if (key == 'r') setInstrument(3);
	if (key == 't') setInstrument(4);
	if (key == 'y') setInstrument(5);
	if (key == 'u') setInstrument(6);
	if (key == 'i') setInstrument(7);
	if (key == 'o') setInstrument(8);
	if (key == 'p') setInstrument(9);
	if (key == '1') noteOn(50);
	if (key == '2') noteOn(52);
	if (key == '3') noteOn(54);
	if (key == '4') noteOn(55);
	if (key == '5') noteOn(57);
	if (key == '6') noteOn(59);
	if (key == '7') noteOn(61);
	if (key == '8') noteOn(62);
	if (key == '9') noteOn(64);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == '1') noteOff(50);
	if (key == '2') noteOff(52);
	if (key == '3') noteOff(54);
	if (key == '4') noteOff(55);
	if (key == '5') noteOff(57);
	if (key == '6') noteOff(59);
	if (key == '7') noteOff(61);
	if (key == '8') noteOff(62);
	if (key == '9') noteOff(64);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
