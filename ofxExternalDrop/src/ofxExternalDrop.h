
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
    ofxExternalDrop() { }

    bool getDragInitiated() {
        return dragInitiated;
    }    

    bool getIsDragging() {
        return drop.getIsDragging();
    }

    bool externalDragAndDropFileInit(std::vector<std::string> files) {
        dragInitiated = true;
        return drop.externalDragAndDropFileInit(files);
    }

    void handleExternalDragAndDropMotionNotify() {
        drop.handleExternalDragAndDropMotionNotify();
    }
    
    void handleExternalDragAndDropButtonReleaseEvent() {
       if(drop.getIsDragging()) {
           drop.handleExternalDragAndDropButtonReleaseEvent();
       }
       dragInitiated = false;
    }

private:
    externalDragAndDrop drop;
    bool dragInitiated = false;
};