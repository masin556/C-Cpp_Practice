/*참조자 형식 
레퍼런스 
1. C에는 없다. 
2. 포인터와 구조적으로 비슷하다.(모습은 포인터 같지 않음)
3. 선언과 동시에 반드시 초기화
형식 &이름 = 원본;
C++에서의 참조자는 포인터의 단점이 보완되어 출시된 것 
포인터 보다 특정 경우가 아니라면 대부분 참조자 사용권함*/

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, wchar_t argv[])
{

#pragma region 참조형변수사용
	int nData = 10;

	//nData 변수에 대한 참조자 선언 

	int& ref = nData;

	// 참조자(ref)의 값을 변경하면 원본(nData)도 변경된다. 
	ref = 20; 
	cout << nData << endl;

	// 포인터와 비슷 
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl; 
#pragma endregion

	return 0;
}