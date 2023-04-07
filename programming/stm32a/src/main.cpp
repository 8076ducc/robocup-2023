#include <Arduino.h>

#define led PA5

#define s0 PB0
#define s1 PB1
#define s2 PB2
#define s3 PB10

#define mux1 PA0
#define mux2 PA1
#define lightgate PA4

#define solenoid PA7

#define TEENSYSERIAL Serial1
#define DEBUG Serial2

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

  TEENSYSERIAL.begin(9600);

  DEBUG.begin(9600);
  DEBUG.println("Initialising...");
}

void loop() {
  // DEBUG.println(analogRead(lightgate));
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  DEBUG.println(analogRead(mux1));
}