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
		printf("�̸� %s, ���� %d\n", name, age);
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
		printf("�̸� : %s, ���� : %d��, �й� : %d ���� ����\n", name, age, stunum);
	}
	void intro() {

		printf("�й� : %d, �̸� : %s\n", stunum, name);
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
		printf("%s�� �����ϰ� ���� ����.\n", thesis);
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
		printf("Ű %d ������ %d\n", height, weight);
	}

	void fight() {
		puts("����Ʈ, ����Ʈ, µ\n");
	}
};

int main() {
	Human Bae("����", 29);
	Bae.intro();

	Student Jin("��", 14, 12);
	Jin.intro();
	Jin.study();
	Jin.report();

	Boxer park("������", 61, 178, 65);
	park.intro();
	park.fight();
}