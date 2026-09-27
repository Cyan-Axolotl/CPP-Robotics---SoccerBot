/* This library contains the basic library for SoccerBot. That includes start up functions, gamepad functions, and LED functions.
Additional functions can be found through STEMpedia @ https://ai.thestempedia.com/docs/dabble-app/getting-started-with-dabble/ starting at section 4.
Example code layout will be at the bottom after functions have been defined.
*/

// These functions are required for bluetooth connection

#define CUSTOM_SETTINGS //Defines the Dabble library to the code
#include <DabbleESP32.h> //Defines bluetooth protocol between Dabble and ESP32 Board
Dabble.begin("BLUETOOTH_NAME"); //Assigns ESP32 Board to a specific bluetooth ID and name of your choosing
Dabble.processInput(); // Refresh incoming App Data



//These Functions are specific to the control type you use on the Dabble app

//Gamepad functions
#define INCLUDE_GAMEPAD_MODULE //Definies the Gamepad library to the code
//Each of this functions return a boolean
GamePad.isUpPressed() //Up Button
GamePad.isDownPressed() //down Button
GamePad.isLeftPressed() //left Button
GamePad.isRightPressed() //right Button
GamePad.isSquarePressed() //square Button
GamePad.isCirclePressed() //circle Button
GamePad.isTrianglePressed() //triangle Button
GamePad.isCrossPressed() //cross Button
GamePad.isStartPressed() //start Button
GamePad.isSelectPressed() //select Button
//Each of these function returns a component of the joystick position. (only works with joystick mode)
GamePad.getAngle() //The value varies from 0 to 360 degrees with respect to positive X axis with a step of 15 degrees
GamePad.getRadius() //The value varies from 0 to 7 from center
GamePad.getXaxis() //The value varies from -7 to 7 from orgin
GamePad.getYaxis() //The value varies from -7 to 7 from orgin

//Led Brightness Control
#define INCLUDE_LEDCONTROL_MODULE
LedControl.getpinNumber() //This function returns the pin selected for LED Brightness control in the mobile app. The function returns int data type.
LedControl.getpinState() //The function returns the state of the pin set by the user in the mobile app. This function returns the following output:
LedControl.readBrightness() //This function returns the brightness value set by the user in the mobile app. It returns int data type with a value ranging between 0 and 100.


//Example Code
#define CUSTOM_SETTINGS //Defines the Dabble library to the code
#define INCLUDE_GAMEPAD_MODULE //Definies the Gamepad library to the code (to be updated with what applicaation are you using)
#include <DabbleESP32.h> //Defines bluetooth protocol between Dabble and ESP32 Board

void setup() {
  Dabble.begin("BLUETOOTH_NAME"); //Assigns ESP32 Board to a specific bluetooth ID and name of your choosing
}

void loop() {
  Dabble.processInput(); // Refresh incoming App Data
  /* ........................
  ...........................
  */
}




  
