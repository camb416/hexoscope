#include "ofApp.h"

#define X_OFFSET -70
#define Y_OFFSET -70

//--------------------------------------------------------------
void ofApp::setup(){
    img.loadImage("triangle.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
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
    
    for(int j=0;j<11;j++){
        
        for(int i=0;i<18;i++){
            ofPushMatrix();
            ofTranslate(i*124.8+(j%2)*124.8/2+X_OFFSET,j*108+Y_OFFSET);
            ofPushMatrix();
            ofRotate(i*-240+(j%2)*240);
            //ofSetColor(255,0,0);
            img.draw(-62.3,-72,124.8,108);
            ofPopMatrix();
           // ofRect(0,0,3,3);
            ofTranslate(124.8/2,-72/2);
            ofRotate(-240+i*-120+j%2*-240);
            //ofSetColor(0,0,255);
            //if(j==0){
                img.draw(-62.3,72,124.8,-108);
              //  ofRect(0,0,3,3);
               // ofDrawBitmapString(ofToString(i)+","+ofToString(j),0,0);

            //}
                        ofPopMatrix();
        }
        
        
    }
    
    
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
