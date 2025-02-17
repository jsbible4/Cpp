#include <iostream>
using std::cin; using std::endl; using std::cout;

typedef long long ll;
// long long �ڷ����� ll�� �����Ͽ� ª�� �̸����� ���. 
// long long �� 64��Ʈ ������. 

struct Account {
	char accid[15]; // ���¹�ȣ(�ִ� 15��)
	char name[20]; // �� �̸�(�ִ� 20��)
	char pw[5];		//��й�ȣ(�ִ� 4�ڸ�, null-terminated���� 5�ڸ�)
	ll balance;	    //���� �ܾ�
};

ll deposite(Account& ref, ll increase);
ll withdraw(Account& ref, ll decrease);
void balanceCheck(Account& ref);

int main()
{
	Account acc = { "123-56787-345", "�̼���", "1234", 90000 };		//����ü ���� ���� �� �ʱ�ȭ
	balanceCheck(acc);

	cout << "�Ա� �� ���� �ܾ��� " << deposite(acc, 5000) << "�Դϴ�.\n";
	cout << "��� �� ���� �ܾ��� " << withdraw(acc, 2000) << "�Դϴ�. \n";

	return 0;

}
ll deposite(Account& ref, ll increase)
{
	ref.balance += increase;
	return ref.balance;		//�ܾ� ����
}
ll withdraw(Account& ref, ll decrease)
{
	ref.balance -= decrease;
	return ref.balance;
}
void balanceCheck(Account& ref)
{
	cout << ref.name << "������ ���� ���� �ܾ��� " << ref.balance << "�Դϴ�. \n";
}