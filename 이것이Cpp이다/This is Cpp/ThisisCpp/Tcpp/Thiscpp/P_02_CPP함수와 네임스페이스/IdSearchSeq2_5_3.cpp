/*전역 변수 : 네임스페이스보다 선언 위치가 더 우선 한다.*/

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