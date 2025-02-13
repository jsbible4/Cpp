﻿#include <iostream>
#define DEFAULT_INT_VALUE -1
#define DEFAULT_DOUBLE_VALUE -1.0

using std::cout; using std::cin; using std::endl;

// 함수 오버로딩 : 포인터와 참조를 이용한 입력 함수
void input(int* p1, double* p2); //call by address (포인터 사용)
void input(int& r1, double& r2); //call by reference (참조 사용)

void input(int* p1, double* p2) //call by address (포인터 사용)
{
	if (p1 == nullptr || p2 == nullptr)
	{
		cout << "[포인터 방식] nullptr이 전달됨. 기본값을 설정함 \n";
		return;
	}
	if (p1 == nullptr) {
		cout << "[포인터 방식] nullptr이 전달됨. 기본값을 설정함 \n";
	}
	else {
		cout << "[포인터 방식] 정수 입력 : ";
		cin >> *p1;
	}

	if (p2 == nullptr) {
		cout << "[포인터 방식] nullptr이 전달됨.기본값을 설정함 \n";
	}
	else {
		cout << "[포인터 방식] 실수 입력 : ";
		cin >> *p2;
	}
	/*
	✔️ p2가 nullptr이면 입력을 받지 않음
	✔️ nullptr이 아니면 사용자로부터 실수 입력 받음 (cin >> *p2;)
	*/

	cout << "포인터를 이용해서 입력 (Call by-Address)\n";

}

void input(int& r1, double& r2)
{
	cout << "[참조 방식] 정수 입력 : ";
	cin >> r1;
	cout << "[참조 방식] 실수 입력 : ";
	cin >> r2;
	cout << "레퍼런스를 이용해서 입력 (Call by-Reference)";
}
/* 
참조 방식은 nullptr 검사가 필요 없음 ! 
참조는 반드시 유효한 변수여야 하기 때문
*/

int main()
{
	int value1 = DEFAULT_INT_VALUE, value2 = DEFAULT_INT_VALUE;
	double  data1 = DEFAULT_DOUBLE_VALUE, data2 = DEFAULT_DOUBLE_VALUE;

	cout << "\n ---- 포인터 방식 (nullptr 전달) 테스트 ----\n";
	input(nullptr, nullptr);
	// nullptr을 전달하여 입력을 받지 않고 기본값을 유지하는지 테스트 

	cout << "[기본값 적용] value1 = " << value1 << ", data1 = " << data1 << "(기본값 적용됨)\n";

	cout << "\n -- 포인터 방식 입력 테스트, value1 -- \n" << value1 << ", data1 = " << data1 << endl;

	input(&value1, &data1);
	cout << "[변경 후] value1 = " << value1 << ", data1 = " << data1 << endl;

	cout << "\n -- 참조 방식 입력 테스트, value2 -- \n" << value2 << ", data2 = " << data2 << endl;

	input(&value2, &data2);
	cout << "[변경 후] value2 = " << value2 << ", data2 = " << data2 << endl;

	return 0;

}
