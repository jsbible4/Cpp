#include <iostream>


namespace A {
	void megait() {
		std::cout << "1. megait\n";

	}
}
/* 

A라는 네임스페이스(namespace) 내부에 megait() 함수를 정의
✔️ 출력 내용: "1. megait\n"


*/
namespace B {
	void megait() {
		std::cout << "2. megait\n";

	}
}
namespace C {
	void megait() {
		std::cout << "3. megait\n";

	}
}

using namespace C;
/*
* ✔️ C 네임스페이스를 기본으로 사용
✔️ 따라서 megait();를 호출하면 C::megait();가 실행됨

🚀 즉, megait(); → C::megait(); 와 동일한 의미


 using namespace C;를 제거하면 megait();를 단독으로 사용할 수 없음.
 using namespace C;가 있으면 C 네임스페이스를 기본으로 설정하여 C:: 없이 megait();를 바로 호출 가능.
*/

int main()
{

	A::megait();
	B::megait();
	megait();

	return 0;
}