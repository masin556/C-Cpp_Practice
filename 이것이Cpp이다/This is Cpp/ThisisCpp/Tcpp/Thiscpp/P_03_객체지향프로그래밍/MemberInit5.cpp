/*�����ڿ� ������ ���� ����ϴ� ���� �����ٸ� C++11��Ÿ��*/
#include "pch.h"

class CTest
{
public:
	//������ �ʱ� ȭ ����� �̿��� ��� �ʱ�ȭ
	CTest() { }

	//C++11���� ����� ���ÿ� ��� ������ �ʱ�ȭ �� �� �ִ�!.
	int m_nData1 = 10;
	int m_nData2 = 20;

	void PrintData(void)
	{
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();

	return 0;
}