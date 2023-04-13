#include <main.h>
#include <lightGate.cpp>
#include <lightRing.cpp>
#include <solenoid.cpp>

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);

  pinMode(mux1, INPUT);
  pinMode(mux2, INPUT);
  pinMode(lightgate, INPUT);

  pinMode(solenoid, OUTPUT);

  TEENSY.begin(9600);
}

void loop() {
  detectLight();
  processLight();
  // TEENSY.println(analogRead(lightgate));
  // digitalWrite(solenoid, HIGH);
  // delay(5000);
  // digitalWrite(solenoid, LOW);
  // delay(5000);
}