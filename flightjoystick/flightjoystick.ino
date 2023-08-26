#include "Joystick.h"

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_MULTI_AXIS, 32, 0,
  true, true, false, false, false, false,
  true, true, false, false, false);


void setup() {


 Joystick.begin(false);


  Joystick.setXAxisRange(0, 500);
  //Joystick.setYAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  Joystick.setRudderRange(0, 1023);
  Joystick.setThrottleRange(0, 1023);
  
  

}

void loop() {
  Joystick.setXAxis(analogRead(A0));
  Joystick.setYAxis(analogRead(A2));
  Joystick.setRudder(analogRead(A3));
  Joystick.setThrottle(analogRead(A1));

  Joystick.sendState();
  

}
