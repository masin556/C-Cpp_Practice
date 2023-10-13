/*매개변수의 디폴트 값을 '선언'한 함수는 호출자 코드에서 실인수를 생략한 채 호출 가능하다.
매개 변수의 디폴트 값은 반드시 함수 원형의 선언 부분에 기술해야한다.*/

/* 
cout << TestFunc(10) << endl;
cout << TestFunc() << endl;
위 코드 모두 동일하다.

그래서 호출자 코드만 보고 함수 원형을 확정지어서 안된다. 
*/

#include "pch.h"

int TestFunc(int = 10);

int TestFunc(int nParam)
{
	return nParam;
}


int main()
{
	cout << TestFunc(20) << endl;

	return 0;
}

