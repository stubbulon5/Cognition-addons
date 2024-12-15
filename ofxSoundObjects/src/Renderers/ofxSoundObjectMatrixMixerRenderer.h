//
//  ofxSoundObjectMatrixMixerRenderer.h
//
//  Created by Roy Macdonald on 5/4/19.
//
//

#pragma once
#include "ofxSoundObjectBaseRenderer.h"
#include "ofxSoundMatrixMixer.h"
//#include "ofxGui.h"
#include "ofxSlidersGrid.h"
#include "ofxSoundPlayerObject.h"

#define DISABLE_SLIDERS
class ofxSoundMatrixMixerRenderer: public ofxSoundObjectBaseRenderer<ofxSoundMatrixMixer>{
public:
	virtual void draw(const ofRectangle& mixerRect) override;
	void enableSliders();
	void disableSliders();
	void toggleSliders();
	bool isSlidersEnabled();
	
	void setNonSliderMode(bool b);
	bool isNonSliderMode();
	
	void setMinChannelHeight(const float& minHeight);
	
		  ofRectangle& 	getLeftRect()		{return leftR;}
	const ofRectangle&  getLeftRect() const {return leftR;}
		  ofRectangle& 	getBottomRect()		  {return bottomR;}
	const ofRectangle&  getBottomRect() const {return bottomR;}
		  ofRectangle& 	getGridRect()		{return gridR;}
	const ofRectangle&  getGridRect() const {return gridR;}
		  ofRectangle& 	getBottomLeftRect()		  {return bottomLeftR;}
	const ofRectangle&  getBottomLeftRect() const {return bottomLeftR;}

	

	void drawStatus(float x = 20, float y =20);
	
protected:

	ofRectangle leftR;
	ofRectangle bottomR;
	ofRectangle gridR;
	ofRectangle bottomLeftR;
	ofRectangle drawRect;

	float leftW = 200;
	float bottomH = 50;
	float chanW = 10;
	
	ofVboMesh mainMesh, lineGridMesh, playheadMesh;
	std::vector<ofVboMesh> textMeshes;
	void buildMeshes();
	void buildPlayheads();
	void buildOutputSliders();
	void buildSlidersGrid();
	ofxSlidersGrid slidersGrid;
	ofxSlidersGrid outputSliders;
	ofRectangle outputSlidersRect;
	void updatePlayheads();
	
	bool bDisableTextRendering = false;
private:
	
	std::map<size_t, ofxSoundPlayerObject* > playheadsIndices;
	size_t numChansIn = 0, numChansOut =0;

	bool bMasterSliderSetup = false;
	
	bool bNonSliderMode = false;
	
	float minHeight = 1;
	
	float vuWidth = 20;
};

