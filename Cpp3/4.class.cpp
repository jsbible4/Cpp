#include <iostream>
using std::cin; using std::cout; using std::endl;

/*
	* Coding Convension
	1. Ŭ�������� �Ľ�Į ǥ����� ����
		- ex) OrderList, NewCar
	2. Ŭ������ ��������� �տ��� ���ξ� m�� ���� ��, ī�� ǥ������� ��
		- ex) mName, mAge
	3. �Լ��� �Ű������� ���������� �ɸ� ǥ����� ��
		- ex) height, width
	4. public ��� �Լ��� �Ľ�Į ǥ����� ��
		- ex) SetName, GetName
*/
class Triangle {
public:
	// ������� (�ﰢ���� �غ��� ����)
	double mBase = 0, mHeight = 0;

	void SetTriangle(double base, double height) {
		mBase = base;
		mHeight = height;
	}

	double getArea()
	{
		return mBase * mHeight / 2;
	}
};

int main() {
	Triangle tri;		//Ŭ���� ���� ����
	tri.SetTriangle(30, 50);
	cout << "�ﰢ���� ���̴� " << tri.getArea() << "�Դϴ�. \n";

	return 0;
}