#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0; /* {
		puts("도형 오브젝트입니다.\n");
	}*/
};

class Line : public Shape {
public:
	void draw() {
		puts("선을 긋습니다.\n");
	}
};

class Circle : public Shape {
public:
	void draw() {
		puts("원을 그립니다.\n");
	}
};

class Rect : public Shape {
public:
	void draw() {
		puts("사각형을 그립니다.\n");
	}
};

class Triangle : public Shape {
public:
	void draw() {
		puts("삼각형을 그립니다.\n");
	}
};

int main() {
	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line(), new Triangle() };

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i];
	}
}