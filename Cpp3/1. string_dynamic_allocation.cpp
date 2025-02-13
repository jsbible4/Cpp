#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // strcpy()

using std::cout; using std::endl; using std::cin;

void swap(char*& ptr1, char*& ptr2);

int main()
{
	char* str1 = new char[20];  // ���̰� 20�� ���� �迭�� �������� �Ҵ� 
	char* str2 = new char[10];  // ���̰� 10�� ���� �迭�� �������� �Ҵ� 

	strcpy(str1, "Happy New Year!");	// str1�� "Happy New Year!" ���ڿ��� ������
	strcpy(str2, "megait");

	cout << "origial : " << str1 << ", " << str2 << endl;
	swap(str1, str2);		// str1�� str2�� ������ ���� ��ȯ
	cout << "after swap() : " << str1 << ", " << str2 << endl;
	//�������� �Ҵ�� �޸� ���� 
	delete[] str1;
	delete[] str2;

	return 0;


}

void swap(char*& ptr1, char*& ptr2)
{
	char* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

}