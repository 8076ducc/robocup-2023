#include <main.h>

int bearingErrorSum;
int bearingLastError;

int correctBearing() {
    int threshold = 0;

    int kp = 0;
    int ki = 0;
    int kd = 0;

    int error = threshold - IMUSERIAL.read();
    bearingErrorSum += error;

    int derivative = error - bearingLastError;

    int correction = kp * error + ki * bearingErrorSum + ki * derivative;

    return correction;
}