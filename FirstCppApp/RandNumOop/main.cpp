#include <stdio.h>
#include "cursor.h"

class RandNum
{
private:
	int num;

public:
	RandNum() { randomize(); }
	void Generate() { num = random(100) + 1; }
	BOOL Compare(int input) {
		if (input == num) {
			printf("������ϴ�.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("�Է��� ���ڰ� �� �۽��ϴ�.\n");
		}
		else {
		}
	}
};

class Ask
{
private:
	int num;

public:
	void Promt() { }
	BOOL AskNumber() { }
	
};

int main()
{
	RandNum R;
	Ask A;

	while (1) {
		R.Generate();
		A.Promt();
		while (1) {
			exit(EXIT_SUCCESS);
		}
	}
}