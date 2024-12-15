/*
    Copyright (C) 2015 Stephen Braitsch [http://braitsch.io]

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#pragma once
#include "ofxDatGuiComponent.h"

class ofxDatGuiCustomView : public ofxDatGuiComponent {

    public:
    
        ofxDatGuiCustomView(string label, bool showLabels = false) : ofxDatGuiComponent(label)
        {
            mShowLabels = showLabels;
            mType = ofxDatGuiType::CUSTOM_VIEW;
            setTheme(ofxDatGuiComponent::getTheme());
        }
    
        void setTheme(const ofxDatGuiTheme* theme)
        {
            setComponentStyle(theme);
            mFillColor = theme->color.inputAreaBackground;
            setWidth(theme->layout.width, theme->layout.labelWidth);
        }
    
        void setWidthAndHeight(int width, int height, float labelWidth)
        {
            
            if (!mShowLabels) {
                ofxDatGuiComponent::setWidth(width, 0);
                mCustomRect.x = x + mStyle.padding;
                mCustomRect.width = mStyle.width - mStyle.padding;

            } else {
                ofxDatGuiComponent::setWidth(width, labelWidth);

                mCustomRect.x = x + mLabel.width;
                mCustomRect.width = mStyle.width - mStyle.padding - mLabel.width;
            }

            mCustomRect.y = y + mStyle.padding;
            //mCustomRect.height = mStyle.height - (mStyle.padding * 2);
            
            
            // This is wrong fix!!
            mCustomRect.height = height - (mStyle.padding * 2);
            
        }
    
        void setPosition(int x, int y)
        {
            ofxDatGuiComponent::setPosition(x, y);
            mCustomRect.x = x + mLabel.width;
            mCustomRect.y = y + mStyle.padding;
        }
    
        void draw()
        {
            if (!mVisible) return;
            ofPushStyle();
                ofxDatGuiComponent::draw();
                ofSetColor(mFillColor);
                ofDrawRectangle(mCustomRect);
            ofPopStyle();
            
            if (customviewEventCallback != nullptr) {
                ofxDatGuiCustomViewEvent ev(this);
                customviewEventCallback(ev);
            }   else{
                ofxDatGuiLog::write(ofxDatGuiMsg::EVENT_HANDLER_NULL);
            }
        }
    
        static ofxDatGuiCustomView* getInstance() { return new ofxDatGuiCustomView("X", false); }
    
    protected:
    
        void onMouseRelease(ofPoint m)
        {
            ofxDatGuiComponent::onFocusLost();
            ofxDatGuiComponent::onMouseRelease(m);
        }
    
    private:
        bool mShowLabels;
        ofColor mFillColor;
        ofRectangle mCustomRect;
};



