#include <iostream>   // ����� ���� ����

int main()
{
	std::cout << "�� �� �Է�(���� ����) : ";
	int n1, n2; 
	std::cin >> n1 >> n2;					// n1, n2�� ������� �Է³ִ´�. 
	std::cout << "�Է� ���� ������ " << n1 << ", " << n2 << "�Դϴ�\n";		//cout �� ������ ���ڿ��� �־ ����Ѵ�. 

	double avg;
	avg = (n1 + n2) / 2.0;   //r value �� l value�� �Ҵ��Ѵ�. 
	std::cout << "���� ����� " << avg << "�Դϴ�.\n";
	std::cout << std::endl << std::endl;		//endline ���� �ٷ� �ѱ�� ( 2�� ) 

	char ch;
	std::cout << "���� �Է� : ";
	std::cin >> ch;

	std::cout << "���� : " << ch << ", �ƽ�Ű �ڵ� : " << (int)ch << std::endl;	// ch�� ���ڿ��� (int)ĳ��Ʈ �����ڸ� ���ؼ� 10���� ������ ��µȴ�. 

	if (ch >= 'A' && ch <= 'Z')		//�빮�ڶ��
		std::cout << ch << "==>" << (char)(ch + 32) << std::endl;
	else if (ch >= 'a' && ch <= 'z')
		std::cout << ch << "==>" << (char)(ch - 32) << std::endl;

	
	return 0;
}