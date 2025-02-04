#include <iostream>

// void outDate(int year, int month, int day);
void outDate(int year, int month, int day, char seperate = '/');
void outDate(const char* pDate);   // const를 쓰면 처음에 정의된 것 외에는 값을 바꿀 수가 없다. ?? 모르겠음 ㅎ


int main() {
	outDate(2025, 2, 4);
	outDate(2026, 3, 10, '\\');
	outDate(2026, 3, 10, '#');
	outDate("2027년 5월 30일");			// ???? 포인터인데 왜그대로나오지 
	return 0;
}
//void outDate(int year, int month, int day)
//{
//	std::cout << year << '/' << month << '/' << day << std::endl;
//}

void outDate(int year, int month, int day, char seperate)
{
	std::cout << year << seperate << month << seperate << day << std::endl;
}

void outDate(const char* pDate)		//pDate 포인터는 문자열 상수의 주소 
{
	std::cout << pDate << std::endl;
}