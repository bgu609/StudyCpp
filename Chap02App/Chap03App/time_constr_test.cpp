#include <stdio.h>

class Time {
private:
	int hour, min, sec;

public:
	Time(int hour, int min, int sec) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	Time(int hour, int min) {
		this->hour = hour;
		this->min = min;
		this->sec = 0;
	}

	Time(int abssec) {
		this->hour = abssec / 3600;
		this->min = (abssec / 60) % 60;
		this->sec = abssec % 60;
	}

	void OutTime() {
		printf("현재 시각은 %2d:%2d:%2d입니다.\n", this->hour, this->min, this->sec);
	}
};

int main() {
	Time Now = Time(16, 57, 45);
	Now.OutTime();

	Time Sharp = Time(16, 58);
	Sharp.OutTime();

	Time noon = Time(43200);
	noon.OutTime();
}