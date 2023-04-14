#include <main.h>
#include <camera.cpp>
#include <imu.cpp>
#include <lidar.cpp>
#include <lightRing.cpp>
#include <motion.cpp>
#include <serial.cpp>

void setup() {
  pinMode(m1PWM, OUTPUT);
  pinMode(m2PWM, OUTPUT);
  pinMode(m3PWM, OUTPUT);
  pinMode(m4PWM, OUTPUT);
  pinMode(lidarPWM, OUTPUT);
  pinMode(dribblerPWM, OUTPUT);

  analogWrite(lidarPWM, 255);

  pinMode(m1INA, OUTPUT);
  pinMode(m2INA, OUTPUT);
  pinMode(m3INA, OUTPUT);
  pinMode(m4INA, OUTPUT);

  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  #ifdef DEBUG
  
  Serial.begin(256000);
  while(!Serial) {}
  Serial.println("Initialising...");
  
  #endif

  L1SERIAL.begin(9600);
	L4SERIAL.begin(256000);
	IMUSERIAL.begin(115200);
  BTSERIAL.begin(115200);
	CAMSERIAL.begin(1000000);
}

void loop() {
  int xComponent = correctX();
  int yComponent = correctY();
  int rotationComponent = correctBearing();

  int speed = 0;
  int direction = 0;

  move(speed, direction, rotationComponent)
}
