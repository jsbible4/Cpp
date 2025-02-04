#include <iostream>
#define DEFAULT_INT_VALUE -1
#define DEFAULT_DOUBLE_VALUE -1.0
using std::cout; using std::cin; using std::endl;

// 함수 오버로딩 : 포인터와 참조 
void input(int* p1, double* p2);		// call by address ( 포인터 사용 ) 
void input(int& r1, double& r2);		// call by reference ( 참조 사용 ) 


void input(int* p1, double* p2)
{
	if (p1 == nullptr || p2 == nullptr) {		//nullptr 검사 
		cout << "nullptr이 전달됨. 기본값을 설정함 \n" << endl;
		//nullptr일 경우 기본값 설정
		static int tempint = DEFAULT_INT_VALUE;
		static double tempdouble = DEFAULT_DOUBLE_VALUE;   // static = 고정된 변수 = 상수 ? 
		if (p1 == nullptr) p1 = &tempint;
		if (p2 == nullptr) p2 = &tempdouble;

	}

	cout << "[포인터 방식] 정수 입력 : ";
	cin >> *p1;		//주소를 이용하여 원본 변수 값 할당
	cout << "[포인터 방식] 실수 입력 : ";
	cin >> *p2;
	cout << "포인터를 이용해서 입력 ( Call by Address ) ";

}

void input(int& r1, double& r2)		// call by reference ( 참조 사용 ) 
{
	cout << "[참조 방식] 정수 입력 : ";
	cin >> r1;		// 참조를 이용하여 원본 변수 값 할당 
	cout << "[참조 방식] 실수 입력 : ";
	cin >> r2;
	cout << "레퍼런스를 이용해서 입력 (Call by reference)";

}

int main()
{
	int value = 5;
	int value2 = 5;
	double data1 = 2.0;
	double data2 = 2.0;

	cout << "\n -----포인터 방식 (nullptr전달) 테스트 -----\n";
	input(nullptr, nullptr);
	cout << "[기본값 적용] value1 = " << DEFAULT_INT_VALUE << ", data1 = " << DEFAULT_DOUBLE_VALUE << "기본값 적용됨 \n";






	return 0;
}