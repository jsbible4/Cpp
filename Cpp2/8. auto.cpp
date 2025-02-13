#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
	int a = 10;
	auto b = a;		// b는 a의 타입을 따르므로 int가 됨
	//auto c;  //error - auto 타입의 변수는 선언만 할수 없음 
	auto c = 3.4;	//	3.4는 기본적으로 double 타입이므로 c는 double이 됨.

	//auto는 초기화된 값의 타입을 보고 자동으로 타입을 결정함.
	//하지만, 초기화 없이 사용할 수 없고, 함수의 매개변수 타입으로 직접 사용할 수 없음.

	cout << a << ", " << b << endl;
	cout << typeid(a).name() << ", " << typeid(b).name() << ", " << typeid(c).name() << endl;

	return 0;
}

/*

typeid().name()은 C++에서 변수나 표현식의 타입을 확인할 때 사용하는 기능이야.
이를 통해 컴파일러가 추론한 실제 타입이 무엇인지 확인할 수 있어.

*/