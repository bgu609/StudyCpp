#include <stdio.h>
#include "time.h"

void Time::SetTime(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
};

void Time::OutTime() { 
	printf("현재 시각은 %d:%d:%d입니다.\n", hour, min, sec);
};