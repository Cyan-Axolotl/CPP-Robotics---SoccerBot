#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE 
#include <DabbleESP32.h>

const int ledPin = 2;
const int ENA = 12;
const int IN1 = 14;
const int IN2 = 27;
const int IN3 = 26;
const int IN4 = 25;
const int ENB = 33;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Dabble.begin("SoccerBot");
}

void loop() {
  Dabble.processInput();
  if (GamePad.isUpPressed() > 0) {
    Serial.print("Received via Dabble: ");
    digitalWrite(ledPin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(ENB, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    Serial.print("forward");
  } else if (GamePad.isDownPressed() > 0) {
    Serial.print("Received via Dabble: ");
    digitalWrite(ledPin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(ENB, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    Serial.print("BACK");
  } else if (GamePad.isRightPressed() > 0) {
    Serial.print("Received via Dabble: ");
    digitalWrite(ledPin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(ENB, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    Serial.print("RIGHT");
  } else if (GamePad.isLeftPressed() > 0) {
    Serial.print("Received via Dabble: ");
    digitalWrite(ledPin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(ENB, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    Serial.print("Left");
  } else {
    Serial.print("Received via Dabble: ");
    digitalWrite(ledPin, LOW);
    digitalWrite(ENA, LOW);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(ENB, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    Serial.print("STOP");
  }
}
