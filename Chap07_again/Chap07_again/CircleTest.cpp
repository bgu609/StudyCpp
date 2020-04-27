#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"

class Point {
protected:
	int x, y;
	char ch;

public:
	Point(int ax, int ay, char ach) {
		x = ax; y = ay; ch = ach;
	}

	void Show(void) {
		gotoxy(x, y); putch(ch);
	}

	void Hide() {
		gotoxy(x, y); putch(' ');
	}

	void move(int nx, int ny) {
		Hide();
		x = nx;
		y = ny;
	}
};

class Circle : public Point {
protected:
	int radius;

public:
	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) {
		radius = arad;
	}

	void Show(void) {
		gotoxy(radius * x, radius * y); putch(ch);
	}

	void Hide() {
		gotoxy(radius * x, radius * y); putch(' ');
	}

	void move(int nx, int ny) {
		Hide();
		x = nx;
		y = ny;
	}
};

int main() {
	Point P(1, 1, 'P');
	P.Show();

	getchar();

}