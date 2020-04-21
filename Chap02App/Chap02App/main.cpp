#include "time.h"
#include "date.h"

int main() {
	Time now;
	now.SetTime(15, 54, 20);
	now.OutTime();

	Date nowd;
	nowd.SetDate(2020, 4, 21);
	nowd.OutDate();

	return 0;
}



/*
class human {
public:
	char name[12];
	int age;

	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	human h = { "배기웅", 29 };
	h.intro();

	human arFriend[10] = {
		{ "문동욱", 49 },
		{ "김유진", 45 },
		{ "박상막", 30 },
	};

	for (int i = 0; i < 10; i++) {
		human* pFriend;
		pFriend = &arFriend[1];
		pFriend->intro();
	}


	return 0;
}
*/