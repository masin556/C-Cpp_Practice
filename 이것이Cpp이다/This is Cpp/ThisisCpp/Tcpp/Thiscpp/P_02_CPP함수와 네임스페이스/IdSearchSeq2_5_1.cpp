/*현재 블록 범위
가장 먼저 검색하는 범위는 식별자에 접근하는 코드가 속한 블록 범위({}구간) 이다.
식별자에 접근하는 코드가 속한 블록 범위*/

#include "pch.h"

int nData(20);

int main(int argc, wchar_t argv[])
{
	int nData(10);

	// 검색 순서상 접근자 코드가 속한 블록 범위가 우선하므로 지역변수 값을 출력한다.

	cout << nData << endl;
	cout << argc << endl;

	return 0;
}