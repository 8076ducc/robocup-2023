#ifndef main.h
#define main.h

#include <Arduino.h>

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

#define led PC13

#define imuSCL PB6
#define imuSDA PB7
#define imuRST PC13

#define TEENSY Serial1
#define DEBUG Serial2

#endif