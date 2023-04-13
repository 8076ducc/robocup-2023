#include <main.h>

int ldrReadings[32];

int muxSingals[16][4] = {
    {0, 0, 0, 0}, //0
	{1, 0, 0, 0}, //1
	{0, 1, 0, 0}, //2
	{1, 1, 0, 0}, //3
	{0, 0, 1, 0}, //4
	{1, 0, 1, 0}, //5
	{0, 1, 1, 0}, //6
	{1, 1, 1, 0}, //7
	{0, 0, 0, 1}, //8
	{1, 0, 0, 1}, //9
	{0, 1, 0, 1}, //10
	{1, 1, 0, 1}, //11
	{0, 0, 1, 1}, //12
	{1, 0, 1, 1}, //13
	{0, 1, 1, 1}, //14
	{1, 1, 1, 1}  //15
};

#ifdef botA

int ldrThresholds[32] = {
    0, // 1
    0, // 2
    0, // 3
    0, // 4
    0, // 5
    0, // 6
    0, // 7
    0, // 8
    0, // 9
    0, // 10
    0, // 11
    0, // 12
    0, // 13
    0, // 14
    0, // 15
    0, // 16
    0, // 17
    0, // 18
    0, // 19
    0, // 20
    0, // 21
    0, // 22
    0, // 23
    0, // 24
    0, // 25
    0, // 26
    0, // 27
    0, // 28
    0, // 29
    0, // 30
    0, // 31
    0, // 32
};

#endif

#ifdef botB

int ldrThresholds[32] = {
    0, // 1
    0, // 2
    0, // 3
    0, // 4
    0, // 5
    0, // 6
    0, // 7
    0, // 8
    0, // 9
    0, // 10
    0, // 11
    0, // 12
    0, // 13
    0, // 14
    0, // 15
    0, // 16
    0, // 17
    0, // 18
    0, // 19
    0, // 20
    0, // 21
    0, // 22
    0, // 23
    0, // 24
    0, // 25
    0, // 26
    0, // 27
    0, // 28
    0, // 29
    0, // 30
    0, // 31
    0, // 32
};

#endif

void detectLight() {
    for (int i = 0; i < 16; i++) {
        digitalWrite(s0, muxSingals[i][0]);
        digitalWrite(s1, muxSingals[i][1]);
        digitalWrite(s2, muxSingals[i][2]);
        digitalWrite(s3, muxSingals[i][3]);
        
        ldrReadings[i] = analogRead(mux1);
        ldrReadings[i + 16] = analogRead(mux2);
    }
}

byte processLight() {
    static byte mask[5] = {0};
	memset(mask, 0, sizeof(mask));

    for (int i = 0; i < 16; i++) {
        if (ldrReadings[i] > ldrThresholds[i]) {

        }
    }
}