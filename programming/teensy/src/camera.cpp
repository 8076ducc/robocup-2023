#include <main.h>

int xErrorSum;
int xLastError;

int correctX() {
    int threshold = 0;

    int kp = 0;
    int ki = 0;
    int kd = 0;

    int error = threshold - CAMSERIAL.read();
    xErrorSum += error;

    int derivative = error - xLastError;

    int correction = kp * error + ki * xErrorSum + ki * derivative;

    return correction;
}