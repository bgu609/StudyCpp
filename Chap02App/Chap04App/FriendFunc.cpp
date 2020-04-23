#include <stdio.h>

class Date;
class Time;

class Time {
	friend void OutToday(Date&, Time&);
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) : hour(h), min(m), sec(s) {
		if (h >= 0 && h < 24) { hour = h; }		else { hour = 0; }
		if (m >= 0 && m < 60) { min = m; }		else { min = 0; }
		if (s >= 0 && s < 60) { sec = s; }		else { sec = 0; }
	}
};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		if (m >= 0) { year = y; }				else { year = 0; }
		if (m >= 1 && m <= 12) { month = m; }	else { month = 0; }
		if (m >= 1 && m <= 31) { day = d; }		else { day = 0; }
	}
};

void OutToday(Date& d, Time& t) {
	printf("%d�� %d�� %d�� / %d�� %d�� %d��\n", d.year, d.month, d.day, t.hour, t.min, t.sec);
}

int main() {
	Date d(2020, 4, 22);
	Time t(15, 23, 35);

	OutToday(d, t);
}