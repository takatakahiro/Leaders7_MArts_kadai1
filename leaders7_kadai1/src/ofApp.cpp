#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    x = mouseX - ofGetWidth()/2;
    y = mouseY - ofGetHeight()/2;
    
    
    

    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    
    if(y <= 0){
        color.setHsb(ofRadToDeg(-(double)atan2(y,x))/360*255,255,255);
    }else{
        color.setHsb(ofRadToDeg(-(double)atan2(y,x))/360*255 + 255,255,255);
    }
    ofSetColor(color);
    ofFill();
    ofSetLineWidth(5);
    
    
    ofLine(0,0,x,y);
    
    
    if(x != 0){
        ofCircle(0,0,(x / cos((double)atan2(y,x))) / 4);
        ofNoFill();
        ofCircle(0,0,x / cos((double)atan2(y,x)));
    }else{
        ofCircle(0,0,y / 4);
        ofNoFill();
        ofCircle(0,0,y);
    }
    
    ofPopMatrix();
    
    
    ofSetColor(70);
    ofSetLineWidth(1);
    l_wide = 34;
    
    for(int i = 0; i < ofGetWidth()/l_wide + 1; i++){
        ofLine(l_wide * i, 0, l_wide * i, ofGetHeight());
    }
    for(int j = 0; j < ofGetHeight()/l_wide + 1; j ++){
        ofLine(0, l_wide * j, ofGetWidth(), l_wide * j);
    }
    
    
    ofSetColor(0);
    
    ofLine(mouseX,0,mouseX,ofGetHeight());
    ofLine(0,mouseY,ofGetWidth(),mouseY);
    
    
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
