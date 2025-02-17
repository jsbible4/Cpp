#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //strcpy()

using std::cout; using std::endl; using std::cin;

//두 개의 char* 포인터를 교환하는 함수 선언 
void swap(char*& ptr1, char*& ptr2); // *& 포인터의 참조, 포인터 자체를 수정 

int main()
{
	char* str1 = new char[20];	// 길이가 20인 문자 배열을 동적으로 할당 
	char* str2 = new char[10];  // 길이가 10인 문자 배열을 동적으로 할당 

	strcpy(str1, "Happy New Year!");	//str1에 문자열 복사. 
	strcpy(str2, "megait");

	cout << "original : " << str1 << ", " << str2 << endl;
	swap(str1, str2);
	cout << "after swap() : " << str1 << ", " << str2 << endl;

	//동적으로 할당된 메모리 해제 
	delete[] str1;
	delete[] str2;

	return 0;
}

void swap(char*& ptr1, char*& ptr2)  // 함수는 포인터에 대한 참조를 받아옴. => 원래의 포인터 값을 직접 수정할 수 있음. 
{
	char* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}