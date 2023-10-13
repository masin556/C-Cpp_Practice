/*r-value 참조
대입 연산자의 두 피연산자 중 오른쪽에 위치한 연산자를 말한다. 

일반적인 변수와 상수 모두 해당될 수 있다.

형식-
int &&rData = 3;

*/

#include "pch.h"
#include <iostream>

using namespace std;

int TestFunc(int nParam)
{
	int nResult = nParam * 2;

	return nResult;
}

int main()
{
	int nInput = 0;
	cout << "Input number : ";
	cin >> nInput;

	//산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
	int &&rdata = nInput + 5; // 덧셈 연산으로 
	cout << rdata << endl;


	//함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
	int &&result = TestFunc(10);

	// 값을 변경할 수 있다.
	result += 10;
	cout << result << endl;

	return 0;
}