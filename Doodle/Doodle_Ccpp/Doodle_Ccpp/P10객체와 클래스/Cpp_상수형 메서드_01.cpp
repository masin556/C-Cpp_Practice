/*���� ���� ���ݰ� ����� ����ϴ� Ŭ����*/

#include "../help.h"

class Account
{
public:
	Account() : money(0) { }
	Account(int money) : money(money) { }

	void Deposit(int d)
	{
		money += d;
		cout << d << "���� �����ߴ�!!" << endl;
	}

	void Draw(int d)
	{
		if (money - d >= 0)
		{
			money -= d;
			cout << d << "���� �����ߴ�!!" << endl;
		}
	}

	//int GetMoney() const { money++; return money; } // const ������ money ������ ���.
	int GetMoney() const { return money; } //���� �ܾ� ��ȯ

private:
	int money;
};

int main()
{

	return 0;
}
