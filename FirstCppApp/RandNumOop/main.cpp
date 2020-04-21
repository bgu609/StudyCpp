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
			printf("맞췄습니다.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("입력한 숫자가 더 작습니다.\n");
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