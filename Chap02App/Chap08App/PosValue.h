#pragma once

#include <iostream>
#include "cursor.h"

using namespace std;

template <typename T = int>
class PosValue {
private:
	int x, y;
	T value;

public:
	PosValue() : x(0), y(0), value(0) { ; }
	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { ; }

	void OutValue() {
		gotoxy(x, y);
		cout << value << endl;
	}
};