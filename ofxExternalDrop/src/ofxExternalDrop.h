
#if defined(TARGET_LINUX)
	#include "platform/x11/externalDragAndDropX11.h" 
#elif defined(TARGET_OSX)
	#include "platform/osx/externalDragAndDropOSX.h"
#elif defined(TARGET_WIN32)
	#include "platform/win/externalDragAndDropWin.h"
#else 
	#include "platform/unsupported/externalDragAndDropUnsupported.h"    
#endif


class ofxExternalDrop {

public:
    ofxExternalDrop(bool init) {
        if (init) {
            drop = externalDragAndDrop();
        }
    }

    ofxExternalDrop() {
    }    
    
    bool getIsDragging() {
        return drop.getIsDragging();
    }

    bool externalDragAndDropFileInit(vector<string> files) {
        return drop.externalDragAndDropFileInit(files);
    }

    void handleExternalDragAndDropMotionNotify() {
        drop.handleExternalDragAndDropMotionNotify();
    }
    
    void handleExternalDragAndDropButtonReleaseEvent() {
       if(drop.getIsDragging()) {
           drop.handleExternalDragAndDropButtonReleaseEvent();
       }
    }

private:
    externalDragAndDrop drop;
};