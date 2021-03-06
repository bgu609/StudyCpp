#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }

	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator ++() {
		*this;
		sec++;
		min += sec / 60;
		sec %= 60;
		hour += min / 60;
		min %= 60;

		return *this;
	}

	const Time operator ++(int dummy) {
		Time t = *this;
		sec++;
		min += sec / 60;
		sec %= 60;
		hour += min / 60;
		min %= 60;

		return t;
	}
};

int main() {
	Time t1(1, 1, 1);
	Time t2;

	t2 = ++t1;
	t1.OutTime();
	t2.OutTime();

	t2 = t1++;
	t1.OutTime();
	t2.OutTime();
}