#include <main.h>

int yErrorSum;
int yLastError;

int correctY() {
    int threshold = (100 + 700) / 2;

    int kp = 0;
    int ki = 0;
    int kd = 0;

    int error = threshold - L1SERIAL.read();
    yErrorSum += error;

    int derivative = error - yLastError;

    int correction = kp * error + ki * yErrorSum + ki * derivative;

    return correction;
}