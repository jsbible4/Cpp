#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a = 10;
	int b(10), q(10), r(10);	//b, q, r을 각각 10으로 초기화하는 또 다른 방법.
	int x = { 3 };		// 리스트 초기화 방식. x를 3으로 초기화.
	int y{ 3 };		// 리스트 초기화 방식으로 y를 3으로 초기화.
	int z{ 0 };	
	int k{ };		// k를 0으로 초기화 (int k = 0;과 동일).


	cout << a << ", " << b << ", " << x << ", " << y << ", " << z << ", " << k << endl;

	int c;
	c = 10;
	//int d;
	//d(10); // error -- 소괄호를 이용한 초기화 방식은 선언하면서 초기화 할 때만 가능 

	int arr1[5]{ 1, 2, 3, 4, 5 };
	int arr2[100] = { 0 }; 
	/* 
	크기가 100인 정수 배열 arr2를 선언하고, 
	첫 번째 원소만 0으로 초기화.
	나머지 요소들은 0으로 자동 초기화됨
	*/
	int arr3[100]{};		// 모든 원소를 0으로 초기화.

	cout << "arr1 : ";
	for (auto elem : arr1)
		cout << elem << " ";		//arr1의 값은 안바뀌는 call by value 
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