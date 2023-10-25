/*중첩 네임스페이스 
범위 속에 규모의 범위가 속할 수도 있고, 범위가 여러 개 존재 할 수도 있다.
네임스페이스 안에 또 다른 네임스페이스 속할 수 있다. 
*/

#include "pch.h"

namespace TEST
{
	int g_nData = 100;
	namespace DEV
	{
		int g_nData = 200;
		namespace WIN
		{
			int g_nData = 300;
		}
	}
}


int main()
{
	cout << TEST::g_nData << endl;
	cout << TEST::DEV::g_nData << endl;
	cout << TEST::DEV::WIN::g_nData << endl;

	return 0;
}