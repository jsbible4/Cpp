#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	int value = 3;
	int* ptr = &value;
	int& ref = value;  // & value ���� ������. 

	cout << "value �ּ� = " << &value << endl; // value�� �ּ� ��� 
	cout << "value = " << value << endl; // value�� �� ��� 
	cout << "������ ptr�� �����ϴ� �� =  " << *ptr << endl; // ������ ptr�� ���� value�� ��� 
	cout << "���۷��� ref = " << ref << endl; //  ���� ref�� ���� value�� ���

	*ptr = 10;		// �����͸� ���� value�� ���� ���� (�˴� �ٲ�) 
	cout << "\n*ptr = 10 ���� �� : " << *ptr << endl; // 10
	cout << "value = " << value << endl;		// 10
	cout << "���۷��� ref = " << ref << endl;	// 10

	ref = 20;		// ���� ������ ���� value �� ���� 
	cout << "\nref = 20 ���� �� : " << ref << endl;	// 20 
	cout << "value = " << value << endl;	// 20
	cout << "������ ptr�� �����ϴ� �� = " << *ptr << endl;	//20

	return 0;


}