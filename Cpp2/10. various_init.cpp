#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a = 10;
	int b(10), q(10), r(10);	//b, q, r�� ���� 10���� �ʱ�ȭ�ϴ� �� �ٸ� ���.
	int x = { 3 };		// ����Ʈ �ʱ�ȭ ���. x�� 3���� �ʱ�ȭ.
	int y{ 3 };		// ����Ʈ �ʱ�ȭ ������� y�� 3���� �ʱ�ȭ.
	int z{ 0 };	
	int k{ };		// k�� 0���� �ʱ�ȭ (int k = 0;�� ����).


	cout << a << ", " << b << ", " << x << ", " << y << ", " << z << ", " << k << endl;

	int c;
	c = 10;
	//int d;
	//d(10); // error -- �Ұ�ȣ�� �̿��� �ʱ�ȭ ����� �����ϸ鼭 �ʱ�ȭ �� ���� ���� 

	int arr1[5]{ 1, 2, 3, 4, 5 };
	int arr2[100] = { 0 }; 
	/* 
	ũ�Ⱑ 100�� ���� �迭 arr2�� �����ϰ�, 
	ù ��° ���Ҹ� 0���� �ʱ�ȭ.
	������ ��ҵ��� 0���� �ڵ� �ʱ�ȭ��
	*/
	int arr3[100]{};		// ��� ���Ҹ� 0���� �ʱ�ȭ.

	cout << "arr1 : ";
	for (auto elem : arr1)
		cout << elem << " ";		//arr1�� ���� �ȹٲ�� call by value 
	cout << endl;

	cout << "arr2 : ";
	for (auto elem : arr2)
		cout << elem << " ";
	cout << endl;

	cout << "arr3 : ";
	for (auto elem : arr3)
		cout << elem << " ";
	cout << endl;

	return 0;

}