#include <iostream>


using std::cout; using std::cin; using std::endl;

int main()
{
	int value = 3;
	int* ptr = &value;
	int& ref = value;
	
	cout << " value �ּ� = " << &value << endl;		// value�� �ּ� ��� 
	cout << " value = " << value << endl;		//value�� �� ���
	cout << " ������ptr�� �����ϴ� �� = " << *ptr << endl;
	cout << " ���۷��� ref�� ����Ű�� �� = " << ref << endl;

	*ptr = 10;		//�����͸� ���� value�� ���� ���� 
	cout << " \n * ptr = 10 ���� �� : " << *ptr << endl;
	cout << " value = " << value << endl;
	cout << " ���۷��� ref = " << ref << endl;

	ref = 20;		//���� ������ ���� value �� ����
	cout << "\n ref = 10  ���� �� : " << ref << endl;
	cout << "value = " << value << endl;
	cout << "������ ptr�� �����ϴ� �� = " << *ptr << endl;

	return 0;
}