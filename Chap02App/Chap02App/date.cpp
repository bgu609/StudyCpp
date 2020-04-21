#include <stdio.h>
#include "date.h"

void Date::SetDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::OutDate() {
	printf("오늘은 %d년 %d월 %d일입니다.\n", year, month, day);
}
