# ofxExternalDrop
Cross platform External Drag and Drop addon for openFrameworks. macOs currently the only functioning implementation. 

I invite the oF community to help out here...

![alt text](ofxaddons_thumbnail.png)

# Description
An example usage for this is having your app generate a Midi file during DnD operation which you subsequently drop onto a DAW sequencer.

# Example usage
## ofApp.cpp
Use the mousePressed, dragEvent and mouseReleased methods. It's that simple :)
```
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
```