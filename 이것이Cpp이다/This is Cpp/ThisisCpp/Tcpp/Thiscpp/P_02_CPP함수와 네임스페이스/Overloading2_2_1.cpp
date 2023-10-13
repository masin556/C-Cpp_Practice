/*다중 정의 , 오버로딩 
C++에서는 매개변수 구성이 달라지거나 어떤 식으로든 함수 원형이 달라지면 이름이 같더라도 다른 함수가 된다.

Add()함수를 세 가지 형태로 다중 정의 */

#include "pch.h"

int Add(int a, int b, int c)
{
	cout << "Add(int, int , int) : ";

	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int) : ";

	return a + b;
}

double Add(double a, double b)
{
	cout << "Add(double, double): ";

	return a + b;
}


int main(int argc, wchar_t argv[])
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}