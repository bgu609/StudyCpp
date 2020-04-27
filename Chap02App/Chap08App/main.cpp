#include "PosValue.h"

int main() {
	PosValue<> iv(10, 10, 2);
	PosValue<char> cv(25, 5, 'C');
	PosValue<double> dv(30, 15, 3.14);

	iv.OutValue();
	cv.OutValue();
	dv.OutValue();
}