#include <main.h>

int maxSpeed = 100;

void move(int speed, int deg, int rotation) {
    int left, right;

    if (deg < 90 || deg > 270){
        A=abs(sine(50-deg)/sine(50+deg));
        B=1;
    } else {
        A=1;
        B=abs(sine(50+deg)/sine(50-deg));
    }

    left *= speed;
    left += rotation;
    right *= speed;
    right += rotation;

    motorOut(1, left);
    motorOut(2, right);
    motorOut(3, left);
    motorOut(4, right);
}

void motorOut(int motor, int speed) {
    int INA, ina, pwm;

    switch (motor) {
        case 1:
            INA = m1INA;
            ina = HIGH;
            pwm = m1PWM;
        case 2:
            INA = m2INA;
            ina = LOW;
            pwm = m2PWM;
        case 3:
            INA = m3INA;
            ina = HIGH;
            pwm = m3PWM;
        case 4:
            INA = m4INA;
            ina = LOW;
            pwm = m4PWM;
    }
    
    if (speed > 0) {
        digitalWrite(INA, ina);
    } else {
        digitalWrite(INA, !ina);
    }

    analogWrite(pwm, speed * maxSpeed)

}
