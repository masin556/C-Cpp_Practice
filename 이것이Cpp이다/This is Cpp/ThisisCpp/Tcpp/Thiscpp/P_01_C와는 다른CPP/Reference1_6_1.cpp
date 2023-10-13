/*매개 변수가 있는 참조자*/


#include "pch.h"
#include <iostream>

using namespace std;

//매개변수가 int에 대한 참조 형식이다.
void TestFunc(int& rParam)
{
	//피호출자 함수에서 원본의 값을 변경했다.
	rParam = 100;
}

//참조 전달이므로 호출자 변수의 값을 변경할 수 있다.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}
///////////////////////////////////////////////////////////////
int main(int argc, wchar_t argv[])
{
	cout << "매개 참조" << endl;
#pragma region TestFunc매개변수참조
	int nData = 0;

	// 참조에 의한 인수 전달이다.
	TestFunc(nData);
	cout << nData << endl;

#pragma endregion

	cout << "\n" << "참조전달" << endl;
#pragma region Swap참조전달
	int x = 10, y = 20; 

	//참조 전달이며 두 변수의 값이 교환된다.
	Swap(x, y);

	//교환된 결과를 출력한다.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

#pragma endregion
	return 0;
}