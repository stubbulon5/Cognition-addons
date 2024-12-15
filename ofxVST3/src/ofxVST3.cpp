#include "ofxVST3.h"

#include "ofUtils.h"
#include "ofLog.h"




bool ofxVST3::configure() {
	cout << "------- CONFIGURING VST ---------";

 //Steinberg::Vst::EditorHost::App::init();
	//string path = "/Library/Audio/Plug-Ins/VST3/Dexed.vst3";
	//VST3::Optional<VST3::UID> vst_id = VST3::UID::fromString("0d93479f-9f97-4d41-8457-dc21346d0a8b", true);
 	//Steinberg::Vst::EditorHost::App* app = new Steinberg::Vst::EditorHost::App(); 
	//app->openEditor (path,vst_id, 1);

	return true;
}


ofxVST3::~ofxVST3() {

}