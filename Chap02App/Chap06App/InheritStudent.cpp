#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

class Student : public Human {
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		printf("study\n");
	}
	void report() {
		printf("이름 : %s, 나이 : %d세, 학번 : %d 보고서 제출\n", name, age, stunum);
	}
	void intro() {

		printf("학번 : %d, 이름 : %s\n", stunum, name);
	}
};

class Graduate : public Student {
protected:
	char thesis[40];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) :
		Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	};

	void research() {
		printf("%s를 연구하고 논문을 쓴다.\n", thesis);
	}
};

class Boxer : public Human {
protected:
	int height, weight;

public:
	Boxer(const char* aname, int aage, int aheight, int aweight) :
		Human(aname, aage) {
		height = aheight;
		weight = aweight;
	}

	void intro() {
		printf("키 %d 몸무게 %d\n", height, weight);
	}

	void fight() {
		puts("레프트, 라이트, 쨉\n");
	}
};

int main() {
	Human Bae("배기웅", 29);
	Bae.intro();

	Student Jin("진", 14, 12);
	Jin.intro();
	Jin.study();
	Jin.report();

	Boxer park("박종필", 61, 178, 65);
	park.intro();
	park.fight();
}