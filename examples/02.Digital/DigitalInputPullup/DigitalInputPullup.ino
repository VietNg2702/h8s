/*
  Input Pull-up Serial

  This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
  input on pin 2 and prints the results to the Serial Monitor.

  The circuit:
  - momentary switch attached from pin 2 to ground
  - built-in LED on pin 13

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

  created 14 Mar 2012
  by Scott Fitzgerald

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial
*/

/* Modified by SHCVN to support the H8S boards */
#include <Arduino.h>

void setup() {
  //start serial connection
  Serial.begin(BAUD_9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode('6', 1, INPUT_PULLUP); //SW: port 6, pin 1
  pinMode('6', 3, OUTPUT); //LED: port 6, pin 3

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead('6', 1);
  //print out the value of the pushbutton
  Serial.println(sensorVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == HIGH) {
    digitalWrite('6', 3, LOW);
  } else {
    digitalWrite('6', 3, HIGH);
  }
}
