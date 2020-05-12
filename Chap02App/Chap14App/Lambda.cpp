#include <iostream>
using namespace std;

template<typename Func>
void Test(Func func, int n) {
	func(n);
}

int main() {
	int num1 = 0;

	auto func = [num1](int n) mutable {
		num1 = 100;
		cout << num1 << endl;
		cout << "Hello World " << n << endl;
	};

	cout << num1 << endl;

	func(10);
	func(11);

	Test(func, 30);

	return 0;
}