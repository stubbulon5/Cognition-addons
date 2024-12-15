#pragma once
#include "ofMain.h"

// #undef RELEASE
// #define RELEASE


//  #include <base/source/fstring.h>
//  #include <pluginterfaces/base/conststringtable.h>
//  #include <pluginterfaces/base/funknown.h>
//  #include <pluginterfaces/base/ipluginbase.h>
//  #include <pluginterfaces/base/ustring.h>
//  #include <pluginterfaces/gui/iplugview.h>
//  #include <pluginterfaces/gui/iplugviewcontentscalesupport.h>
//  #include <pluginterfaces/vst/ivstattributes.h>
//  #include <pluginterfaces/vst/ivstaudioprocessor.h>
//  #include <pluginterfaces/vst/ivstcomponent.h>
//  #include <pluginterfaces/vst/ivstcontextmenu.h>
//  #include <pluginterfaces/vst/ivsteditcontroller.h>
//  #include <pluginterfaces/vst/ivstevents.h>
//  #include <pluginterfaces/vst/ivsthostapplication.h>
//  #include <pluginterfaces/vst/ivstmessage.h>
//  #include <pluginterfaces/vst/ivstmidicontrollers.h>
//  #include <pluginterfaces/vst/ivstparameterchanges.h>
//  #include <pluginterfaces/vst/ivstplugview.h>
//  #include <pluginterfaces/vst/ivstprocesscontext.h>
//  #include <pluginterfaces/vst/vsttypes.h>
//  #include <pluginterfaces/vst/ivstunits.h>
//  #include <pluginterfaces/vst/ivstmidicontrollers.h>
//  #include <pluginterfaces/vst/ivstchannelcontextinfo.h>
//  #include <public.sdk/source/common/memorystream.h>
//  #include <public.sdk/source/vst/vsteditcontroller.h>
//  #include <public.sdk/source/vst/vstpresetfile.h>

 //#include "editorhost/source/editorhost.h"


#if defined(TARGET_LINUX)
	//#include "platform/x11/ofxVST3X11.h" 
#elif defined(TARGET_OSX)
	//#include "platform/osx/ofxVST3OSX.h"
 //	#include "../platform/editorhost/source/platform/mac/window.h"
	 #include "../platform/editorhost/source/platform/mac/platform.mm"
	
	
#elif defined(TARGET_WIN32)
	//#include "platform/win/ofxVST3Win.h"
#else 
	//#include "platform/unsupported/ofxVST3Unsupported.h"    
#endif




class ofxVST3 {

	public:

		ofxVST3();
		~ofxVST3();

		static bool configure();


};
