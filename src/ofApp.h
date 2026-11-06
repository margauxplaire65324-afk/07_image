#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	ofImage imgSource;
	ofImage imgResult;
	ofColor currentColor;
	int effect { 2 };
	int numberEffect { 7 };

	ofColor filter(ofColor color, int effectP, float p = 1.0f);


	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};
