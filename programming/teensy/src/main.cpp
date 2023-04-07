#include <Arduino.h>

// #define m1PWM 2
// #define m2PWM 3
// #define m3PWM 4
// #define m4PWM 5
// #define lidarPWM 6
// #define dribblerPWM 18

// #define m1INA 9
// #define m2INA 10
// #define m3INA 11
// #define m4INA 12

// #define L1SERIAL Serial1
// #define L4SERIAL Serial2
// #define IMUSERIAL Serial3
// #define BTSERIAL Serial4
// #define CAMSERIAL Serial5

void setup() {
  // pinMode(m1PWM, OUTPUT);
  // pinMode(m2PWM, OUTPUT);
  // pinMode(m3PWM, OUTPUT);
  // pinMode(m4PWM, OUTPUT);
  // pinMode(lidarPWM, OUTPUT);
  // pinMode(dribblerPWM, OUTPUT);

  // pinMode(m1INA, OUTPUT);
  // pinMode(m2INA, OUTPUT);
  // pinMode(m3INA, OUTPUT);
  // pinMode(m4INA, OUTPUT);

  Serial.begin(9600);
  while(!Serial) {}
  Serial.println("Initialising...");

  // Serial1.begin(9600);
  pinMode(0, INPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // if (Serial2.available() > 0) {
  //   Serial.print(Serial2.read());
  // }

  digitalWrite(LED_BUILTIN, digitalRead(0));
  // while (Serial1.available() > 0) {
  //   Serial.print(Serial1.read());
  // }
}