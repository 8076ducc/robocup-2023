#include <Arduino.h>

#define led PA5

#define imuSCL PB6
#define imuSDA PB7
#define imuRST PC13

#define TEENSYSERIAL Serial1
#define DEBUG Serial2

void setup() {
  TEENSYSERIAL.begin(9600);
  DEBUG.begin(9600);

  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}

void loop() {

}