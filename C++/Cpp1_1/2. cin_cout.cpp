#include <iostream>

int main()
{
	std::cout << "두 수 입력(공백 구분) : ";
	int n1, n2;
	std::cin >> n1 >> n2;
	std::cout << "입력 받은 정수는 " << n1 << ", " << n2 << "입니다. \n";

	double avg;
	avg = (n1 + n2) / 2.0;
	std::cout << "정수 평균은 " << avg << "입니다. \n";
	std::cout << std::endl << std::endl; // endline 줄 2개 바꿈 

	char ch;
	std::cout << "문자 입력 : ";
	std::cin >> ch;

	std::cout << "문자: " << ch << ", 아스키 코드: " << (int)ch << std::endl; // 형태 변환은 앞에 붙여줌. 

	if (ch >= 'A' && ch <= 'Z')
		std::cout << ch << "==>" << (char)(ch + 32) << std::endl;
	else if (ch >= 'a' && ch <= 'z')
		std::cout << ch << "==>" << (char)(ch - 32) << std::endl;

	return 0;
}