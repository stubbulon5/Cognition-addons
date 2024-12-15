#include "ofxFluidSynth.h"

#include "ofUtils.h"
#include "ofLog.h"


static fluid_settings_t* m_settings;
static fluid_synth_t* m_synth;
static fluid_audio_driver_t* m_adriver;


bool ofxFluidSynth::configure(fluid_settings_t* settings) {
	std::cout << "***************************** FLUID SYNTH  ***************************** " << std::endl;
	bool wasError = false;

	try { 
		m_settings = settings;
		m_synth = new_fluid_synth(m_settings);
		m_adriver = new_fluid_audio_driver(m_settings, m_synth);
	} catch (...) {
		wasError = true;
		std::cout << "ERROR INITIALIZING FLUID SYNTH " << std::endl;
	}

	std::cout << std::endl;
	std::cout << "*********************************************************************** " << std::endl;

	return wasError;

}

fluid_synth_t* ofxFluidSynth::getSynth() {
	return m_synth;
}

void ofxFluidSynth::close() {
	delete_fluid_synth(m_synth);
	delete_fluid_settings(m_settings);
}


ofxFluidSynth::~ofxFluidSynth() {
	close();
}
