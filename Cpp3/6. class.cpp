#include <iostream>
using std::cin; using std::cout; using std::endl;

class Trapezoid {
public: 

	double mTop = 0, mBase = 0, mHeight = 0;
	void SetTrapezoid(double top, double base, double height);
	double GetArea();

};

// :: ������ ==> ���� ���� ������ 
// Trapezoid Ŭ������ SetTrapezoid �Լ��� �����Ѵ�. 

void Trapezoid::SetTrapezoid(double top, double base, double height) {
	mTop = top;
	mBase = base;
	mHeight = height;
}

double Trapezoid::GetArea() {
	return (mTop + mBase) * mHeight / 2; 
}

int main()
{
	double top, base, height;
	cout << "����, �غ�, ���̸� �Է��Ͻÿ�(���� ����) : ";
	cin >> top >> base >> height;

	Trapezoid trap;			 // Ŭ���� ���� �� ���� 
	trap.SetTrapezoid(top, base, height);
	cout << "��ٸ��� ���̴� " << trap.GetArea() << "�Դϴ�. ";

	return 0;

}