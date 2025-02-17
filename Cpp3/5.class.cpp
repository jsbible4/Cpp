#include <iostream>
using std::cin; using std::cout; using std::endl;

class Circle {
public:
	//�������
	double mRadius = 0;
	const double PI = 3.141592;

	void SetRadius(double radius) 
	{
		mRadius = radius;
	}

	double GetArea()
	{
		return PI * mRadius * mRadius;
	}

	double GetCircumference()
	{
		return 2 * PI * mRadius;
	}

};

int main()
{
	//Ŭ���� ���� ����
	Circle cir;		//Ŭ���� ���� ����
	cir.SetRadius(10.2);

	cout << "���� �ѷ���" << cir.GetCircumference() << endl;

	return 0;
}