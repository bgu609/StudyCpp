#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* Pass);
	static void DBDisconnect();
	bool RunQuery(const char* SQL);
};

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	hCon = 1234;
	puts("����Ǿ����ϴ�.");
}

void DBQuery::DBDisconnect()
{
	hCon = NULL;
	puts("������ ���������ϴ�.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	puts(SQL);
	return true;
}

int main() {
	DBQuery::DBConnect("192.168.42.199", "root", "epfls+358471");
	DBQuery Q1, Q2, Q3;

	Q1.RunQuery("SELECT* FROM usertbl where userID = 'KBS';");

	DBQuery::DBDisconnect();

	return 0;
}