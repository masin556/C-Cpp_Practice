/*디폴트 매개변수
*/

#include "pch.h"


//nParam 매개변수의 디폴트 값은 10이다.
int TestFunc(int nParam = 10)
{
	return nParam;
}


int main()
{
	//호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
	cout << TestFunc() << endl;

	
	//호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
	cout << TestFunc(20) << endl; //Default값을 20으로 변경


	return 0;
}
