#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0; /* {
		puts("���� ������Ʈ�Դϴ�.\n");
	}*/
};

class Line : public Shape {
public:
	void draw() {
		puts("���� �߽��ϴ�.\n");
	}
};

class Circle : public Shape {
public:
	void draw() {
		puts("���� �׸��ϴ�.\n");
	}
};

class Rect : public Shape {
public:
	void draw() {
		puts("�簢���� �׸��ϴ�.\n");
	}
};

class Triangle : public Shape {
public:
	void draw() {
		puts("�ﰢ���� �׸��ϴ�.\n");
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