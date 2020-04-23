#include <stdio.h>

class Time {
	friend const Time operator +(const Time& me, const Time& other);
private:
	int hour, min, sec;

public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }

	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator +(int s) const {
		Time t = *this;

		t.sec += s;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
	}

	bool operator ==(const Time& other) const {
		return (hour == other.hour && min == other.min && sec == other.sec);
	}

	bool operator !=(const Time& other) const {
		return (*this == other);
	}

	bool operator >(const Time& other) const {
		if (hour > other.hour) return true;
		if (hour < other.hour) return false;
		if (min > other.min) return true;
		if (min < other.min) return false;
		if (sec > other.sec) return true;
		return false;
	}

	bool operator <(const Time& other) const {
		return !(*this > other);
	}

	bool operator >=(const Time& other) const {
		return (*this == other || *this > other);
	}

	bool operator <=(const Time& other) const {
		return !(*this == other || *this > other);
	}
};

const Time operator +(const Time& me, const Time& other) {
	Time t;
	t.sec = me.sec + other.sec;
	t.min = me.min + other.min;
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;

	return t;
}

int main() {
	Time t1(1, 40, 32), t2(2, 21, 33);
	Time t3;
	t1.OutTime();
	t2.OutTime();

	t3 = t1 + t2;
	t3.OutTime();

	Time now;
	now = t3 + 3655;
	now.OutTime();
}