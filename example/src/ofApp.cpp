#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    map.addQuad(800, 800);
    video.load("/Users/gene/Downloads/bbbgan/_new/BBGAN_60_ease.mp4");
    video.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    map.begin(0);
    video.draw(0, 0, 800, 800);
    map.end(0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='d') {
        map.toggleDebug();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
