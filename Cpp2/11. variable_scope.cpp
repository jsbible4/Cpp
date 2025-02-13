#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int global = 1;
// 전역변수 
// 플그램 전체에서 접근 가능한 global 변수를 선언하고 1로 초기화 
// 함수 내부뿐만 아니라 프로그램 어디서든 접근 가능

void func(int arg) {		//매개변수
	int x = 1;		//지역변수: 함수가 호출될 때마다 새로운 변수 생성, 함수가 종료되면 소멸 
	static int sta = 1;
	//정적변수 = 지역변수(해당블록내에서 사용) + 전역변수(변수의 scope)
	//한 번만 초기화되며, 함수가 종료되더라도 값이 유지됨. 
	// static을 붙이면 전역 변수처럼 프로그램이 종료될 때까지 메모리에 유지되지만, 해당 함수 내부에서만 접근 가능 

	global++;
	sta++;		// 1+1 = 2 -> 함수 종료 이후에 값 유지.  
	x++;

	cout << global << ", " << sta << ", " << x << endl;

}

void func2() {
	global = 100;
	//sta = 200; //error func 함수 내부의 정적 변수이므로 func2에서는 접근 불가능 
	cout << "global = " << global << endl;
}

int main()
{
	int a = 3;
	{
		int b = 7;
		int c = 9;
		/*
		{}를 이용해 새로운 블록을 생성하고, b와 c를 선언.
		b와 c는 블록 내부에서만 유효하며, 블록이 끝나면 사라짐.
		*/
	}
	func(100); // 2 2 2
	func(200); // 3 3 2
	func(300); // 4 4 2
	func2(); // global = 100
	cout << "global = " << global << endl;

	return 0;
}