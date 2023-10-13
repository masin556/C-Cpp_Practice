/*매개 변수가 둘인 경우
매개 변수가 둘이면 디폴트 값도 두 매개변수에 모두 혹은 일부에 설정할 수 있다.
매개 변수가 하나인 경우와 달리 신경써야 할 요소가 있다.

호출자가 설정하는 실인수는 피호출자 함수 매개변수의 왼쪽부터 짝을 맞춘다. */

#include "pch.h"

int TestFunc(int nParam1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}

int main()
{
	cout << TestFunc(10) << endl;
	cout << TestFunc(10, 5) << endl;

	return 0;
}