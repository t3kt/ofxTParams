#pragma once

#include <ofMain.h>
#include <ofxTParams.h>

class FooParams
: public ofxTParams::Params {
public:
  FooParams() {}
};

class ofApp : public ofBaseApp{

public:
  void setup();
  void update();
  void draw();
private:
  FooParams _fooParams;
};
