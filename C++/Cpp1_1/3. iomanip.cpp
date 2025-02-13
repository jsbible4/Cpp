#include <iostream>
#include <iomanip>
// setw()와 같은 출력 형식 조정을 위한 라이브러리 포함 

using namespace std;
//   std::cout, std::cin처럼 사용할 필요 없이 cout, cin을 바로 사용할 수 있도록 설정


int main()
{
	cout << left; // 출력 정렬을 왼쪽 정렬로 설정 (기본값은 오른쪽) 
	for (int i = 1; i <= 100; i++)
		cout << setw(8) << i; 
	//  setw(8) -> 출력 칸을 8칸 확보 ( 숫자 출력 시, 자리를 8칸 차지하도록 설정) 
	cout << endl; // 개행하여 다음 줄로 이동 

	cout << "\n";
	//  endl과 동일한 역할을 하지만, endl은 버퍼를 즉시 비우는 기능이 있어 실행 속도 차이가 날 수도 있음.

	char str[255]; // 배열이름은 포인터 (str == &str[0])
	// 최대 255개의 문자 저장 가능 
	
	cout << "문자열 입력 : ";
	cin >> str; // 입력 (주소부터 차례대로 저장한 후, 끝에 널문자('\0')
	// cin은 공백(띄어쓰기, 엔터)을 기준으로 하나의 단어만 입력받음 


	
	cout << "입력 받은 문자열은 " << str << "입니다.\n"; // 널문자 이전까지 출력 

	return 0;
}