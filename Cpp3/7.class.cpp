#include <iostream>
using std::cin; using std::cout; using std::endl;

#define OP_COUNT 7
// ���� ���� ���� ���� 

/* 
		������(enum) 
		- ���� ������ ��Ÿ��
		- �� �����ڴ� 1���� ����, 1�� �����ϴ� ���� ���� ���� 
*/
/*
		mutable
		- const �Լ������� ���� �����ϵ��� mutable ����
		- �Ϲ������� const �Լ��������� ��� ���� ������ �Ұ����� 
		- mutable�� ����ϸ� const �Լ� �������� �ش� ������ ���� ������ �� ���� 
*/


//enum = ���������� �����Ͽ� �������� ����. 
enum eOperater {
	ADD = 1,
	SUB,		//2
	MUL,		//3
	DIV,		//4
	POWER,			//�ŵ�����
	POWER_OF_TWO		// 2�� �ŵ����� 
};

//���� Ŭ���� ���� 
class Calculator {
public:		// const �Լ��� �����Ͽ� ������� ������ �Ұ�. 
	double Add(double d1, double d2) const {
		++mCount[ADD];		//���� ���� Ƚ�� ���� 
		return d1 + d2;
	}
	double Substract(double d1, double d2) const {
		++mCount[SUB];
		return d1 - d2;
	}
	double Multiply(double d1, double d2) const {
		++mCount[MUL];
		return d1 * d2;
	}
	double Divide(double d1, double d2) const {
		if (d2 == 0) {
			cout << "���� : 0���� ���� �� �����ϴ�. " << endl;
			return 0;
		}
		++mCount[DIV];
		return d1 / d2;
	}

	// �ŵ���� ���� �Լ� (���� ���� ����ó��)
	std::int64_t Power(int x, int y) const {
		if (y < 0) {
			cout << "���� : ���� ������ �������� �ʽ��ϴ�." << endl;
			return 0;
		}
		++mCount[POWER];

		std::int64_t result = 1;
		for (int i = 0; i < y; i++)
			result *= x;
		//x��  y����
		return result;
	}
	std::int64_t PowerOfTwo(int x, int y) const {
		if (y < 0) {
			cout << "���� : ���� ������ �������� �ʽ��ϴ�." << endl;
			return 0;
		}
		++mCount[POWER_OF_TWO];
		return 1LL << y;
		// << �� ��Ʈ ����Ʈ ������ 
		// LL = longlong Ÿ�� (64��Ʈ)
		// 1LL << y �� 1 * (2^y) �� ���� ȿ�� . 
	}

	void ShowOperationCount() const {
		cout << " \n\n -- ���� Ƚ�� ��� -- \n\n";
		cout << " ����: " << mCount[ADD] << "ȸ\n";
		cout << " ����: " << mCount[SUB] << "ȸ\n";
		cout << " ����: " << mCount[MUL] << "ȸ\n";
		cout << " ������: " << mCount[DIV] << "ȸ\n";
		cout << " �ŵ�����: " << mCount[POWER] << "ȸ\n";
		cout << " 2�� �ŵ�����: " << mCount[POWER_OF_TWO] << "ȸ\n";

	}

private:
	mutable int mCount[OP_COUNT] = { 0 };	// ���� Ƚ���� �����ϴ� �迭
	// �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ.
};


//�Է� ���� �Լ� ( ��ȿ�� ���� �Է��� ���� ������ �ݺ�)

void GetValidInput(double& num) {
	while (true) {
		cin >> num;
		if (cin.fail()) {		//�Է� �������� ������ ���� ������ ���� �߻� => true ��ȯ(�Է½���)
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��ϼ���. " << endl;
			cin.clear();		// cin�� ���� ���¸� �ʱ�ȭ�Ͽ� �ٽ� �Է� ���� �� �ְ� ��
			cin.ignore(1000, ' '); // �Է� ���ۿ��� �ִ� 1000�� ���� �Ǵ� ���๮�ڰ� ���ö����� ���۸� ���. 
		}
		else {
			break;
		}
	}
}

int main()
{
	Calculator calc;		//Calculator ��ü ���� (������ ����)

	while (true) {
		cout << "\n\n --- ���� ���α׷� ---\n";
		cout << "1. ����	2. ����	3. ����	4. ������	5. �ŵ�����	6. 2�� �ŵ�����";
		cout << "�޴� ���� : ";

		int choice;
		cin >> choice;

		if (cin.fail() || choice < 0 || choice > 6) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��ϼ���. " << endl;
			cin.clear();
			cin.ignore(1000, ' '); //�Է� ���۸� ��� ���� �Է� ���� ����
			continue;
		}

		// ���α׷� ����
		if (choice == 0) {
			calc.ShowOperationCount();
			return 0;
		}

		double d1 = 1, d2, result = 0;
		if (choice == POWER_OF_TWO) {
			cout << "���� �Է� : ";
			GetValidInput(d2);		// ��ȿ�� ���� �Է� �ޱ�

			result = calc.PowerOfTwo(d1, static_cast<int>(d2));	// 2�� �ŵ����� �����ϱ� 
			cout << "2^ " << static_cast<int>(d2) << " = " << result << endl;
            /* 
			static_cast<T>(��)
			C++ ���� Ÿ���� ��ȯ�ϴ� ���� ������ ��� �� �ϳ� 
			d2 �� double Ÿ���ε�, �̸� int �� ��ȯ 
			�Ҽ��� ���� �κ��� ������ (�ݿø� XX)
			*/
		 
		}
		else {
			cout << "�� ���� �Է� : ";
			GetValidInput(d1);
			GetValidInput(d2);

			char op = ' ';

			// choice�� ���� ���� �ٸ� ������ �����ϵ��� �ϴ� switch �� 

			switch (choice) {
			case ADD:
				op = ' + ';
				result = calc.Add(d1, d2);
				break;
			case SUB:
				op = ' - ';
				result = calc.Substract(d1, d2);
				break;
			case MUL:
				op = ' * ';
				result = calc.Multiply(d1, d2);
				break;
			case DIV:
				op = ' / ';
				result = calc.Divide(d1, d2);
				break;
			case POWER:
				op = ' ^ ';
				result = calc.Power(static_cast<int>(d1), static_cast<int>(d2));
				break;
			}
			cout << d1 << " " << op << d2 << " = " << result << endl;
		}
		

	}
	return 0;

}