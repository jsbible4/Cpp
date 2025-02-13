#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num;
	cout << "�л� �� �Է� : ";
	cin >> num;

	//int score[num];  // �迭�� ���� �Ҵ��� �Ǿ� �� -- �����Ͻ� �޸� ũ�Ⱑ �����Ǿ� �� 
	// ������ ������ �迭�� ũ�⸦ �����ؾ� ��. (���� �������� ���� ���� !) 
	int* score = new int[num];
	//���� ��(run-time)�� �޸𸮸� �Ҵ�(���� �Ҵ�) => heap ����
	//  ��(Heap) ������ num ũ���� ���� �迭�� �������� �Ҵ�.
	// score�� �������� �Ҵ�� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ����.

	double total = 0;
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> score[i];
		total += score[i];

	}
	cout << num << "�� �л��� ���� ����� " << total / num << "�Դϴ�. \n";

	delete[] score; //���� �Ҵ�� �޸𸮴� �ݵ�� ���ŵǾ�� ��

	return 0;
}

/*

score �� ������ (�ּҰ�)
score[i] �� �迭 ����� �� (����)

*/