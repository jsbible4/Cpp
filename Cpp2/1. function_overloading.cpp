#include <iostream>


// void outDate(int year, int month, int day);

void outDate(int year, int month, int day, char seperate = '/'); // 함수 선언에서만 '/' 기본 매개변수 지정 가능. 정의에서는 XXX 
void outDate(const char* pDate);

// const : 함수 내부에서 문자열을 수정할 수 없게 됨. 
// 문자열을 보호할 수 있음. 


int main()
{
	outDate(2025, 2, 4);
	outDate(2026, 3, 10, '\\');
	outDate(2026, 3, 10, '#');
	outDate(2026, 3, 10, ' ');

	return 0;
}
void outDate(int year, int month, int day, char seperate)// 기본 매개변수는 함수 선언에서만 지정해야 함 !! 이건 함수 정의니까 기본 매개변수를 생략해야 한다. 
{
	std::cout << year << seperate << month << seperate << day << std::endl;
}


/*
✅ 함수 선언(프로토타입)에서는 매개변수 기본값 설정 가능
❌ 함수 정의에서는 기본값 설정 불가능
💡 함수 선언과 정의를 나누면 코드 관리가 더 쉬워짐
*/

void outDate(const char* pDate)   // pDate 포인터는 문자열 상수의 주소 
{
	std::cout << pDate << std::endl;

}