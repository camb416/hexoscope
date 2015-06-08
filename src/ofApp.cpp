#include "ofApp.h"

//#define X_OFFSET -70
//#define Y_OFFSET -70

//--------------------------------------------------------------
void ofApp::setup(){
    img.loadImage("triangle.png");
    
    // GUI Stuff
    // we add this listener before setting up so the initial circle resolution is correct
    xOffset.addListener(this, &ofApp::circleResolutionChanged);
    ringButton.addListener(this,&ofApp::ringButtonPressed);
    
    gui.setup(); // most of the time you don't need a name
    
    //gui.add(filled.setup("fill", true));
    //gui.add(radius.setup( "radius", 140, 10, 300 ));
    //gui.add(center.setup("center",ofVec2f(ofGetWidth()*.5,ofGetHeight()*.5),ofVec2f(0,0),ofVec2f(ofGetWidth(),ofGetHeight())));
    //gui.add(color.setup("color",ofColor(100,100,140),ofColor(0,0),ofColor(255,255)));
    
    gui.add(xOffset.setup("x offset", -70, -200, 200));
    gui.add(yOffset.setup("y offset", -70, -200, 200));
    
    gui.add(hIterations.setup("h iters", 18, 1, 50));
    gui.add(vIterations.setup("v iters", 11, 1, 50));
    
    gui.add(xMult.setup("xMult",124.8f,40,1024));
    gui.add(yMult.setup("yMult",108.0f,100,300));
    
    gui.add(xOff2.setup("xOff2",-62.3f,100,300));
    gui.add(yOff2.setup("yOff2",-72.0f,100,300));
    

    
    
    //gui.add(twoCircles.setup("two circles"));
    //gui.add(ringButton.setup("ring"));
    //gui.add(screenSize.setup("screen size", ""));
    
    bHide = true;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    yMult = (float)xMult/124.8f*108.0f;
    xOff2 = xMult/124.8f*-62.3f;
    yOff2 = yMult/108.0f*-72.0f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofPushMatrix();
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    //img.draw(-124.8/2,-108/2,124.8,-108);
    //ofPopMatrix();
    ofBackground(212);
    ofPushMatrix();
    ofTranslate(0,108);
    
    //float xMult = 124.8f;
    //float yMult = 108.0f;
    
    //float xOff2 = -62.3f;
    //float yOff2 = -72.0f;
    
    
    for(int j=0;j<vIterations;j++){
        
        for(int i=0;i<hIterations;i++){
            ofPushMatrix();
            ofTranslate(i*xMult+(j%2)*xMult/2+xOffset,j*yMult+yOffset);
            ofPushMatrix();
            ofRotate(i*-240+(j%2)*240);
            //ofSetColor(255,0,0);
            img.draw(xOff2,yOff2,xMult,yMult);
            ofPopMatrix();
           // ofRect(0,0,3,3);
            ofTranslate(xMult/2,yOff2/2);
            ofRotate(-240+i*-120+j%2*-240);
            //ofSetColor(0,0,255);
            //if(j==0){
                img.draw(xOff2,-1*yOff2,xMult,-1*yMult);
              //  ofRect(0,0,3,3);
               // ofDrawBitmapString(ofToString(i)+","+ofToString(j),0,0);

            //}
                        ofPopMatrix();
        }
        
        
    }
    
    
    ofPopMatrix();
    
    // auto draw?
    // should the gui control hiding?
    if( bHide ){
        gui.draw();
    }
    
}

void ofApp::circleResolutionChanged(int & circleResolution){
    ofSetCircleResolution(circleResolution);
}

void ofApp::ringButtonPressed(){
    ring.play();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if( key == 'h' ){
        bHide = !bHide;
    }
    if(key == 's') {
        gui.saveToFile("settings.xml");
    }
    if(key == 'l') {
        gui.loadFromFile("settings.xml");
    }
    if(key == ' '){
        color = ofColor(255);
    }
    
    if(key == 'i'){
            yMult = (float)xMult/124.8f*108.0f;
        xOff2 = xMult/124.8f*-62.3f;
        yOff2 = yMult/108.0f*-72.0f;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    screenSize = ofToString(w) + "x" + ofToString(h);

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
