#include "ofMain.h"
#include "ofApp.h"

#include <Windows.h>

int WINAPI WinMain(HINSTANCE h_inst, HINSTANCE h_prev_inst, LPSTR lp_cmd_line, int n_cmd_show) {
	ofSetupOpenGL(540, 400, OF_WINDOW);
	ofApp *steady_hand = new ofApp();
	ofRunApp(steady_hand);
}
