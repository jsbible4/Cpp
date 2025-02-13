#include <iostream>
#include <stdlib.h>			// srand(), rand()
#include <time.h>			// 현재 시간을 가져오는 time() 함수를 사용하기 위해 포함 
// 난수 생성 시 씨드(seed) 값을 설정하는 데 사용됨 


using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a[10];

	srand((unsigned int)time(NULL));

	/*
	
	srand() 함수: 난수 생성기의 시드(seed) 값을 설정
	time(NULL): 현재 시간을 초 단위로 가져옴
	(unsigned int)time(NULL): time()이 반환하는 값을 unsigned int로 변환 후 사용
	
	💡 역할: 프로그램이 실행될 때마다 다른 난수를 생성하도록 설정

	*/

	for (auto& elem : a)		// a 배열의 각 원소를 elem이라는 참조(reference) 변수로 받아옴
		elem = rand() % 10 + 1;			// 1 ~ 10
	
	// 배열 a의 모든 원소를 1~10 사이의 랜덤한 정수로 채움


	cout << "랜덤 정수 출력 : ";
	for (const auto& elem : a)		//elem은 읽기 전용으로 사용됨. 수정 불가!!
		cout << elem << " ";		//배열의 각 원소를 출력하고, 각 숫자 뒤에 공백 추가
	cout << endl;

	return 0;
}