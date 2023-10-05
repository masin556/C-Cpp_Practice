/*auto 예약어 C와는 다른 완전 새로운
초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 '자동'으로 결정된다.
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b(a);

	//auto c(b);
	int c(b); //??????

	cout << a + b + c << endl;

	return 0;
}
