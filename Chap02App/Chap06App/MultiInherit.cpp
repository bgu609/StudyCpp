#include <stdio.h>
#include <conio.h>

class Time {
private:
	int hour, min, sec;

public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }

	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

class Date {
private:
	int year, month, day;

public:
	Date() { ; }
	Date(int y, int m, int d) : year(y), month(m), day(d) { ; }

	void OutDate() {
		printf("%d년 %d월 %d일\n", year, month, day);
	}
};

class DateTime : public Date, public Time {
private:
	bool bEngMessage;
	int millisec;

public:
	DateTime(int y, int M, int d, int h, int m, int s, int ms, bool b = false)
		: Date(y, M, d), Time(h, m, s), millisec(ms), bEngMessage(b) { }

	void OutNow() {
		printf(bEngMessage ? "Now is " : "지금은 ");
		OutDate();
		putch(' ');
		OutTime();
		printf("%d\n", millisec);

	}


};

int main() {

}