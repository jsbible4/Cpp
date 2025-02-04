#include <iostream>
#define DEFAULT_INT_VALUE -1
#define DEFAULT_DOUBLE_VALUE -1.0
using std::cout; using std::cin; using std::endl;

// �Լ� �����ε� : �����Ϳ� ���� 
void input(int* p1, double* p2);		// call by address ( ������ ��� ) 
void input(int& r1, double& r2);		// call by reference ( ���� ��� ) 


void input(int* p1, double* p2)
{
	if (p1 == nullptr || p2 == nullptr) {		//nullptr �˻� 
		cout << "nullptr�� ���޵�. �⺻���� ������ \n" << endl;
		//nullptr�� ��� �⺻�� ����
		static int tempint = DEFAULT_INT_VALUE;
		static double tempdouble = DEFAULT_DOUBLE_VALUE;   // static = ������ ���� = ��� ? 
		if (p1 == nullptr) p1 = &tempint;
		if (p2 == nullptr) p2 = &tempdouble;

	}

	cout << "[������ ���] ���� �Է� : ";
	cin >> *p1;		//�ּҸ� �̿��Ͽ� ���� ���� �� �Ҵ�
	cout << "[������ ���] �Ǽ� �Է� : ";
	cin >> *p2;
	cout << "�����͸� �̿��ؼ� �Է� ( Call by Address ) ";

}

void input(int& r1, double& r2)		// call by reference ( ���� ��� ) 
{
	cout << "[���� ���] ���� �Է� : ";
	cin >> r1;		// ������ �̿��Ͽ� ���� ���� �� �Ҵ� 
	cout << "[���� ���] �Ǽ� �Է� : ";
	cin >> r2;
	cout << "���۷����� �̿��ؼ� �Է� (Call by reference)";

}

int main()
{
	int value = 5;
	int value2 = 5;
	double data1 = 2.0;
	double data2 = 2.0;

	cout << "\n -----������ ��� (nullptr����) �׽�Ʈ -----\n";
	input(nullptr, nullptr);
	cout << "[�⺻�� ����] value1 = " << DEFAULT_INT_VALUE << ", data1 = " << DEFAULT_DOUBLE_VALUE << "�⺻�� ����� \n";






	return 0;
}