#include <iostream>

int main()
{
	std::cout << "�� �� �Է�(���� ����) : ";
	int n1, n2;
	std::cin >> n1 >> n2;
	std::cout << "�Է� ���� ������ " << n1 << ", " << n2 << "�Դϴ�. \n";

	double avg;
	avg = (n1 + n2) / 2.0;
	std::cout << "���� ����� " << avg << "�Դϴ�. \n";
	std::cout << std::endl << std::endl; // endline �� 2�� �ٲ� 

	char ch;
	std::cout << "���� �Է� : ";
	std::cin >> ch;

	std::cout << "����: " << ch << ", �ƽ�Ű �ڵ�: " << (int)ch << std::endl; // ���� ��ȯ�� �տ� �ٿ���. 

	if (ch >= 'A' && ch <= 'Z')
		std::cout << ch << "==>" << (char)(ch + 32) << std::endl;
	else if (ch >= 'a' && ch <= 'z')
		std::cout << ch << "==>" << (char)(ch - 32) << std::endl;

	return 0;
}