/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/


/* Modifed by SHCVN to support the H8S boards*/
#include <Arduino.h>
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode('6', 3, OUTPUT); //port 6, pin 3
  // initialize the pushbutton pin as an input:
  pinMode('6', 1, INPUT); //port 6, pin 1
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead('6', 1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite('6', 3, HIGH);
  } else {
    // turn LED off:
    digitalWrite('6', 1, LOW);
  }
}
