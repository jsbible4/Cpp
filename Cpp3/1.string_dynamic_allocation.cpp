#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //strcpy()

using std::cout; using std::endl; using std::cin;

//�� ���� char* �����͸� ��ȯ�ϴ� �Լ� ���� 
void swap(char*& ptr1, char*& ptr2); // *& �������� ����, ������ ��ü�� ���� 

int main()
{
	char* str1 = new char[20];	// ���̰� 20�� ���� �迭�� �������� �Ҵ� 
	char* str2 = new char[10];  // ���̰� 10�� ���� �迭�� �������� �Ҵ� 

	strcpy(str1, "Happy New Year!");	//str1�� ���ڿ� ����. 
	strcpy(str2, "megait");

	cout << "original : " << str1 << ", " << str2 << endl;
	swap(str1, str2);
	cout << "after swap() : " << str1 << ", " << str2 << endl;

	//�������� �Ҵ�� �޸� ���� 
	delete[] str1;
	delete[] str2;

	return 0;
}

void swap(char*& ptr1, char*& ptr2)  // �Լ��� �����Ϳ� ���� ������ �޾ƿ�. => ������ ������ ���� ���� ������ �� ����. 
{
	char* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}