#include <iostream>
using std::cin; using std::cout; using std::endl;

typedef long long ll;

class Account {
public:			// 외부에서도 접근 가능한 멤버 변수 및 멤버 함수를 정의 
	//멤버변수 
	char accId[15];
	char name[20];
	char pw[6];
	ll balance;

	//멤버함수
	ll deposite(ll increase) {
		balance += increase;
		return balance;
	}
	ll withdraw(ll decrease) {
		balance -= decrease;
		return balance;
	}

	void balanceCheck() {
		cout << name << "고객님의 현재 잔액은 " << balance << "원 입니다. \n";

	}
};

int mani()
{
	Account acc = { "123-34567-123", "신사임당", "1234", 100000 };
	acc.balanceCheck();

	cout << "입금 후 현재 잔액은 " << acc.deposite(5000) << "입니다. \n";
	cout << "출금 후 현재 잔액은 " << acc.withdraw(2000) << "입니다. \n";
	return 0;
}
/*
기본적으로 class 멤버 변수는 private 
private 멤버는 클래스 내부에서만 접근 가능. 

public을 명시해야 외부에서도 사용 가능. 
멤버 함수를 public으로 지정하면 객체에서 호출 가능. 

*/