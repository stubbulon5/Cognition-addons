#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofApp::externalDrop = ofxExternalDrop();
    ofFile newFile(ofToDataPath("temp.txt"), ofFile::WriteOnly);
    newFile.create(); // now file exists 
    ofLogNotice("Wrote file `" + ofFilePath::getAbsolutePath(ofToDataPath("temp.txt")) + "` to test ofxExternalDrop - to test - click application area , drag and release out side of application (eg to desktop. File should land there)");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString("Click and drag from the application window to desktop. A file called temp.txt will magically appear there!", 100,100);
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
    if (!ofApp::externalDrop.getIsDragging())
    {
        // Initiate external Drag and Drop
        string fileToDrop = ofFilePath::getAbsolutePath(ofToDataPath("temp.txt"));
        vector<string> dragFiles = vector<string>({fileToDrop});
        ofApp::externalDrop.externalDragAndDropFileInit(dragFiles);
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (ofApp::externalDrop.getIsDragging())
    {
        ofApp::externalDrop.handleExternalDragAndDropButtonReleaseEvent();
    }
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    if (ofApp::externalDrop.getIsDragging())
    {
        ofApp::externalDrop.handleExternalDragAndDropMotionNotify();
    }
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