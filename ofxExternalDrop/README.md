# ofxExternalDrop
Cross platform External Drag and Drop addon for openFrameworks. macOs currently the only functioning implementation. 

I invite the oF community to help out here...

![alt text](ofxaddons_thumbnail.png)

# Description
An example usage for this is having your app generate a Midi file during DnD operation which you subsequently drop onto a DAW sequencer.

# Example usage
## ofApp.cpp
```
#include "ofApp.h"
#include "ofxExternalDrop.h"

// External drop manager
ofxExternalDrop externalDrop;
bool externalDropInitialized = false;

ofxExternalDrop &getExternalDrop()
{
    if (!externalDropInitialized)
    {
        externalDrop = ofxExternalDrop(true);
        externalDropInitialized = true;
    }
    return externalDrop;
}

void clearExternalDrop()
{
    externalDrop = ofxExternalDrop(false);
    externalDropInitialized = false;
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofFile newFile(ofToDataPath("temp.txt"), ofFile::WriteOnly);
    newFile.create(); // now file exists 
    ofLogNotice("Wrote file `" + ofFilePath::getAbsolutePath(ofToDataPath("temp.txt")) + "` to test ofxExternalDrop - to test - click application area , drag and release out side of application (eg to desktop. File should land there)");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (!getExternalDrop().getIsDragging())
    {
        // Initiate external Drag and Drop
        string fileToDrop = ofFilePath::getAbsolutePath(ofToDataPath("temp.txt"));
        vector<string> dragFiles = vector<string>({fileToDrop});
        getExternalDrop().externalDragAndDropFileInit(dragFiles);
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (getExternalDrop().getIsDragging())
    {
        getExternalDrop().handleExternalDragAndDropButtonReleaseEvent();
    }
    clearExternalDrop();
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
    if (getExternalDrop().getIsDragging())
    {
        getExternalDrop().handleExternalDragAndDropMotionNotify();
    }
}


```