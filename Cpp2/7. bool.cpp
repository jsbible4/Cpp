#include <iostream>

using std::cout;
using std::endl;
using std::cin;

bool isLeapYear(int year);

int main()
{
	int year;

	cout << "�⵵ �Է� : ";
	cin >> year;

	if (isLeapYear(year))
		cout << year << "���� ���� �Դϴ�. \n";
	else
		cout << year << "���� ��� �Դϴ�. \n";

	return 0;
}

/*
	����
		- 4�⸶�� �ѹ��� ���ƿ��� ��
		- 100�⸶�� ���ƿ��� �ش� ����� ��
		- 400�⸶�� ���ƿ��� �ش� ������ ��
*/

bool isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		return true;
	else if (year % 400 == 0)
		return true;

	return false; // ��� 

}

