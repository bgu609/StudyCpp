#include <stdio.h>

class Date;
class Time;

class Time {
	friend class Date;
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) : hour(h), min(m), sec(s) {
		if (h >= 0 && h < 24) { hour = h; }
		else { hour = 0; }
		if (m >= 0 && m < 60) { min = m; }
		else { min = 0; }
		if (s >= 0 && s < 60) { sec = s; }
		else { sec = 0; }
	}
};

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		if (m >= 0) { year = y; }
		else { year = 0; }
		if (m >= 1 && m <= 12) { month = m; }
		else { month = 0; }
		if (m >= 1 && m <= 31) { day = d; }
		else { day = 0; }
	}
	void OutToday(Time& t) {
		printf("%d년 %d월 %d일 / %d시 %d분 %d초\n", year, month, day, t.hour, t.min, t.sec);
	}
};

int main() {
	Date d(2020, 4, 22);
	Time t(15, 23, 35);

	d.OutToday(t);
}