#include <iostream>   // 입출력 관한 파일

int main()
{
	std::cout << "두 수 입력(공백 구분) : ";
	int n1, n2; 
	std::cin >> n1 >> n2;					// n1, n2로 순서대로 입력넣는다. 
	std::cout << "입력 받은 정수는 " << n1 << ", " << n2 << "입니다\n";		//cout 에 오른쪽 문자열을 넣어서 출력한다. 

	double avg;
	avg = (n1 + n2) / 2.0;   //r value 를 l value에 할당한다. 
	std::cout << "점수 평균은 " << avg << "입니다.\n";
	std::cout << std::endl << std::endl;		//endline 다음 줄로 넘기기 ( 2번 ) 

	char ch;
	std::cout << "문자 입력 : ";
	std::cin >> ch;

	std::cout << "문자 : " << ch << ", 아스키 코드 : " << (int)ch << std::endl;	// ch의 문자열이 (int)캐스트 연산자를 통해서 10진수 정수로 출력된다. 

	if (ch >= 'A' && ch <= 'Z')		//대문자라면
		std::cout << ch << "==>" << (char)(ch + 32) << std::endl;
	else if (ch >= 'a' && ch <= 'z')
		std::cout << ch << "==>" << (char)(ch - 32) << std::endl;

	
	return 0;
}