#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class Human {
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	virtual void intro() {
		printf("%s는 %d살입니다.\n", name, age);
	}
};

class Student : public Human {
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void intro() {
		printf("%d번 %s입니다.\n", stunum, name);
	}
};

int main() {
	Human H("성명건", 45);
	H.intro();

	Student S("배기웅", 29, 40);
	S.intro();

	Human* pH;
	Student* pS;

	printf("Human size : %d, Student size : %d\n", sizeof(H), sizeof(S));

	pH = &H;
	pH->intro();
	pS = &S;
	pS->intro();

	pH = &S;
	pH->intro();
	pS = (Student*)&H;
	pS->intro();

	int sel = 0;
	cout << "원하는 수를 고르세요 (1: Human, 2: Student, 9: 종료)\n";
	cin >> sel;

	if (sel == 1)
	{
		pH = &H;
	}
	else if (sel == 2)
	{
		pH = &S;
	}
	else if (sel == 9)
	{
		exit(-1);
	}
	else
	{
		cout << "맞는 수가 없습니다.\n" << endl;
	}

	pH->intro();
}