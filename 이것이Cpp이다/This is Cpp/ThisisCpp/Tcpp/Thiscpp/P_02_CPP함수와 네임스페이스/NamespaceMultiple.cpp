/*Namespace 다중 정의 : C++ 식별자는 '네임스페이스::이름'의 형태를 취한다. 
네임스페이스의 이름이 달라도 나머지(함수이름과 매개변수의 구성)가 같은 형태로 선언되었다면 다중 정의가 가능하다.*/


#include "pch.h"


//전역 (개념상 무소속)
void TestFunc(void) 
{
	cout << "::TestFunc()" << endl; 
}

namespace TEST
{
	// TEST 네임스페이스 소속 
	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA
{
	//MYDATA 네임스페이스
	void TestFunc(void) {
		cout << "DATA::TestFunc()" << endl;
	}
}


int main(int argc, wchar_t argv[])
{
	TestFunc(); //묵시적 전역
	::TestFunc(); //명시적전역
	TEST::TestFunc();
	MYDATA::TestFunc();

	return 0;
}