#include <Arduino.h>
#include "../include/config.h"

#define led PB2

#define m1c1 PA0
#define m1c2 PA1
#define m2c1 PA4
#define m2c2 PA5
#define m3c1 PA6
#define m3c2 PA7
#define m4c1 PB0
#define m4c2 PB1

#define TEENSYSERIAL Serial1
#define DEBUG Serial2

void setup() {
  TEENSYSERIAL.begin(9600);
  DEBUG.begin(9600);

  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}

void loop() {
  DEBUG.print("yes");
}