#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofImage img;
    
    // Things to control in the GUI
    //int xOffset;
    //int yOffset;
    
    //int hIterations;
    //int vIterations;
    
    //float imgScale;
    
    // GUI
    void circleResolutionChanged(int & circleResolution);
    void ringButtonPressed();
    
    bool bHide;
    
    ofxFloatSlider radius;
    ofxColorSlider color;
    ofxVec2Slider center;
    
    ofxIntSlider xOffset;
    ofxIntSlider yOffset;
    
    ofxIntSlider hIterations;
    ofxIntSlider vIterations;
    
    ofxFloatSlider imgScale;
    
    
    ofxToggle filled;
    ofxButton twoCircles;
    ofxButton ringButton;
    ofxLabel screenSize;
    
    ofxPanel gui;
    
    	ofSoundPlayer ring;
		
};
