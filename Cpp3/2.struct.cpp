#include <iostream>
using std::cin; using std::endl; using std::cout;

typedef long long ll;
// long long 자료형을 ll로 정의하여 짧은 이름으로 사용. 
// long long 은 64비트 정수형. 

struct Account {
	char accid[15]; // 계좌번호(최대 15자)
	char name[20]; // 고객 이름(최대 20자)
	char pw[5];		//비밀번호(최대 4자리, null-terminated으로 5자리)
	ll balance;	    //계좌 잔액
};

ll deposite(Account& ref, ll increase);
ll withdraw(Account& ref, ll decrease);
void balanceCheck(Account& ref);

int main()
{
	Account acc = { "123-56787-345", "이순신", "1234", 90000 };		//구조체 변수 선언 및 초기화
	balanceCheck(acc);

	cout << "입금 후 현재 잔액은 " << deposite(acc, 5000) << "입니다.\n";
	cout << "출금 후 현재 잔액은 " << withdraw(acc, 2000) << "입니다. \n";

	return 0;

}
ll deposite(Account& ref, ll increase)
{
	ref.balance += increase;
	return ref.balance;		//잔액 리턴
}
ll withdraw(Account& ref, ll decrease)
{
	ref.balance -= decrease;
	return ref.balance;
}
void balanceCheck(Account& ref)
{
	cout << ref.name << "고객님의 현재 계좌 잔액은 " << ref.balance << "입니다. \n";
}