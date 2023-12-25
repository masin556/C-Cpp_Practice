/*은행 계좌 예금과 출금을 담당하는 클래스*/

#include "../help.h"

class Account
{
public:
	Account() : money(0) { }
	Account(int money) : money(money) { }

	void Deposit(int d)
	{
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}

	void Draw(int d)
	{
		if (money - d >= 0)
		{
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	//int GetMoney() const { money++; return money; } // const 지정시 money 에러가 뜬다.
	int GetMoney() const { return money; } //계좌 잔액 반환

private:
	int money;
};

int main()
{

	return 0;
}
