/*���� ���� : ���ӽ����̽����� ���� ��ġ�� �� �켱 �Ѵ�.*/

#include "pch.h"

int nData = 200;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main(int argc, wchar_t argv[])
{
	TEST::TestFunc();

	return 0;
}