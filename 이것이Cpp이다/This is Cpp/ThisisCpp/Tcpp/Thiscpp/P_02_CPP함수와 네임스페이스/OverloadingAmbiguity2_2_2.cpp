/*다중 정의 모호성
디폴트 매개변수와 다중 정의가 조합되면 강력한 모호성이 발생할 수있다.*/

#include "pch.h"

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

int main()
{
	//TestFunc(5);
	TestFunc(5, 10); //이상한건 이건 또 된다.?
	
	/* 자신이 만들어낸 함수나 객체를 사용하는 또 다른 개발자를 고려해야한다.
	사용자의 실수를 차단하기 위한 노력
	*/
	return 0;
}