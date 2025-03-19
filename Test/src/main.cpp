
#include <Arduino.h>

const int ledPinRed = 2;
const int ledPinGreen = 4;

void setup() {
  pinMode(ledPinGreen,OUTPUT);
  pinMode(ledPinRed, OUTPUT);
}

void loop() {
  // turn LED on
  digitalWrite(ledPinRed,HIGH);
  delay(1000); // this speeds up the simulation

  

  //Turn LED off
  digitalWrite(ledPinRed, LOW);
  delay(1000);

  digitalWrite(ledPinGreen,HIGH);
  delay(1000);

  digitalWrite(ledPinGreen,LOW);
  delay(1000);
}




