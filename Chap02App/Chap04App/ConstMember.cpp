#include <stdio.h>

class MathCalc {
private:
	const double pie;

public:
	MathCalc(double apie) :pie(apie) { ; }

	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.2f\n",r,2*pie*r);
	}
};
int main() {
	MathCalc m(3.141592);
	m.DoCalc(5.0);
}