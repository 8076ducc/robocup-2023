#include <main.h>

#define BNO055_SAMPLERATE_DELAY_MS (100)

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28, &Wire);

void setup()
{
  TEENSY.begin(115200);

  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  bno.begin();
  delay(1000);

  bno.setExtCrystalUse(true);
}

void loop()
{
  sensors_event_t event;
  bno.getEvent(&event);

  TEENSY.print("X: ");
  TEENSY.println(event.orientation.x, 4);

  delay(BNO055_SAMPLERATE_DELAY_MS);
}
