#include <stdio.h>

template <typename T>
void Swap(T& a, T& b) {
	T t;
	t = a; a = b; b = t;
}

/*
void Swap(double& a, double& b) {
	double t;
	t = a; a = b; b = t;
}*/

template <typename T>
void Add(T& a, T& b) {
	return a + b;
	}

template <typename T>
void Minus(T& a, T& b) {
	return a - b;
}

int main() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'A', f = 'B';

	Swap(a, b);
	Swap(c, d);

	printf("a = %d, b=%d\n", a, b);
	printf("c = %d, d=%d\n", c, d);
}