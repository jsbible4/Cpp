#include <iostream>

// void outDate(int year, int month, int day);
void outDate(int year, int month, int day, char seperate = '/');
void outDate(const char* pDate);   // const�� ���� ó���� ���ǵ� �� �ܿ��� ���� �ٲ� ���� ����. ?? �𸣰��� ��


int main() {
	outDate(2025, 2, 4);
	outDate(2026, 3, 10, '\\');
	outDate(2026, 3, 10, '#');
	outDate("2027�� 5�� 30��");			// ???? �������ε� �ֱ״�γ����� 
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

void outDate(const char* pDate)		//pDate �����ʹ� ���ڿ� ����� �ּ� 
{
	std::cout << pDate << std::endl;
}