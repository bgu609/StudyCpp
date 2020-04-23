#include <stdio.h>

class Time {
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		SetHour(h);
		SetMin(m);
		SetSec(s);
	}

	int GetHour() {
		return hour;
	}
	void SetHour(int h) {
		if (h >= 0 && h < 24)
		{
			hour = h;
		}
		else
		{
			hour = 0;
		}
	}

	int GetMin() {
		return min;
	}
	void SetMin(int m) {
		if (m >= 0 && m < 60)
		{
			min = m;
		}
		else
		{
			min = 0;
		}
	}

	int GetSec() {
		return sec;
	}
	void SetSec(int s) {
		if (s >= 0 && s < 60)
		{
			sec = s;
		}
		else
		{
			sec = 0;
		}
	}

	void OutTime() {
		printf("���� �ð��� %d:%d:%d �Դϴ�.\n", hour, min, sec);
	}
};

int main() {
	Time now(14, 2, 24);
	now.OutTime();

	/*
	now.hour = 15;
	now.min = 0;
	now.sec = 0;
	*/
	now.SetHour(40);
	now.OutTime();

	now.SetHour(10);
	now.SetMin(20);
	now.SetSec(30);
	now.OutTime();

	return 0;
}