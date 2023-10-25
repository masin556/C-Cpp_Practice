/*using선언 : 네임스페이스는 '소속' 또는 성씨를 나타낸다고 볼 수 있다. 
우리가 무슨 신씨 31대손 충식아 얼른와서 밥먹어 하고 부르진 않는다. 
그냥 충식아 라고 부를테다. 그래서 이때 
문법에 따라 생략하게 되는데 : 이때 예약어가 using 이다*/

#include "pch.h"

//std 네임스페이스를 using 예약어로 선언한다.
//using namespace std; //본인은 현재 pch.h 에 모여있다.

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		//cout에 대해서 범위를 지정하지 않아도 상관없다.
		cout << "TEST::TestFunc()" << endl;
	}
}

//TEST 네임스페이스에 suing 선언
using namespace TEST;

int main()
{
	//TestFunc()나 g_nData에도 범위 지정을 할 필요가 없다. 
	TestFunc();
	cout << g_nData << endl;

	return 0;
}

