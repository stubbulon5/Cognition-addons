#pragma once

#include <fluidsynth.h>



class ofxFluidSynth {

	public:

		ofxFluidSynth();
		~ofxFluidSynth();

		static bool configure(fluid_settings_t* settings);
		static fluid_synth_t* getSynth();
		static void close();

};
