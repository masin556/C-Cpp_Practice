/*namespace : c++�� �����ϴ� ���� ��ҵ� ���� �Լ�, Ŭ���� ���� �� ���ַ� �����ֱ� ���� ����
*/

#include "pch.h"
#include "stdio.h"

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		cout << "TEST::TestFunc()" << endl;
	}
}

int main()
{
	TEST::TestFunc();
	cout << TEST::g_nData << endl;

	return 0;
}