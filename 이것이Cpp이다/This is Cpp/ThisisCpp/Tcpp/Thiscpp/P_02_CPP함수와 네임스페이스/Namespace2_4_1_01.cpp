/*namespace : c++이 지원하는 각종 요소들 변수 함수, 클래스 등을 한 범주로 묶어주기 위한 문법
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