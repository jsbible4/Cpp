#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
	int a = 10;
	auto b = a;		// b�� a�� Ÿ���� �����Ƿ� int�� ��
	//auto c;  //error - auto Ÿ���� ������ ���� �Ҽ� ���� 
	auto c = 3.4;	//	3.4�� �⺻������ double Ÿ���̹Ƿ� c�� double�� ��.

	//auto�� �ʱ�ȭ�� ���� Ÿ���� ���� �ڵ����� Ÿ���� ������.
	//������, �ʱ�ȭ ���� ����� �� ����, �Լ��� �Ű����� Ÿ������ ���� ����� �� ����.

	cout << a << ", " << b << endl;
	cout << typeid(a).name() << ", " << typeid(b).name() << ", " << typeid(c).name() << endl;

	return 0;
}

/*

typeid().name()�� C++���� ������ ǥ������ Ÿ���� Ȯ���� �� ����ϴ� ����̾�.
�̸� ���� �����Ϸ��� �߷��� ���� Ÿ���� �������� Ȯ���� �� �־�.

*/