#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	// 생성자
	Human(const char* aname, int aage) {
		strcpy(this->name, name);
		this->age = age;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", this->name, this->age);
	}
};

int main() {
	Human h = Human("배기웅", 29);
	h.intro();

	return 0;
}