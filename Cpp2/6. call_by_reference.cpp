#include <iostream>
#include <string>


using namespace std;

/* 
C++���� ���ڿ��� �ٷ�� ���� Ŭ���� std::string�� �����մϴ�. 
�� �ڵ忡���� �л� �̸��� ������ �� std::string�� ����մϴ�.
*/

struct Student {
	string name = "";
	int age = 0;
	double score = 0.0;
};

/*

string�� �������� ũ�Ⱑ �����Ǵ� ���ڿ��� ������ �� �ֽ��ϴ�. 
��, ���ڿ��� ���̰� �����Ǿ� ���� �ʾƼ� ���� ������ �þ�� �ڵ����� ũ�Ⱑ �����˴ϴ�.
std::string�� ���������� ���ڵ��� ������ �� char �迭�� ���������, �پ��� ���ڿ� ó�� ����� �����մϴ�. 
���� ���, ���ڿ� ����, �߶󳻱�, ã��, ��ȯ ���� ���� �� �� �ֽ��ϴ�.

*/

//������ �̿��� �л����� �Է� �Լ�
void inputStudent(Student& stdudent)
{
	cout << "�̸� �Է�: ";
	cin >> stdudent.name;
	cout << "���� �Է�: ";
	cin >> stdudent.age;
	cout << "���� �Է�: ";
	cin >> stdudent.score;
}

// �л� ���� ��� �Լ� (const ���� ���)
void printStudent(const Student& student)
{
	cout << "\n �л� ���� " << endl;
	cout << "�̸� : " << student.name << endl;
	cout << "���� : " << student.age << endl;
	cout << "���� : " << student.score << endl;
}

// const�� �ش� ��ü�� �������� �ʰڴٴ� �ǹ��Դϴ�. 
// ��, �Լ� ���ο��� student ��ü�� ������ �� �����ϴ�.
int main()
{
	Student student;
	inputStudent(student);   //������ ����
	printStudent(student);  //const ������ ����

	return 0;
	
}