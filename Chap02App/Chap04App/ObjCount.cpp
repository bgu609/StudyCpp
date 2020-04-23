#include <stdio.h>

class Simple
{
private:
	int value;
	static int count;
public:
	Simple() { count++; }
	~Simple() { count--; }

	static void InitCount() {
		count = 0;
	}

	static void OutCount() {
		printf("���� ��ü ���� = %d\n", count);
	}
};

int Simple::count = 0;

int main()
{
	Simple::InitCount();
	Simple::OutCount();
	Simple s, * ps;
	s.OutCount();
	ps = new Simple;
	//ps->InitCount();
	//ps->OutCount();
	delete ps;
	s.OutCount();
	printf("ũ�� = %d\n", sizeof(s));
}