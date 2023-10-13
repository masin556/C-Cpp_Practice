/*상수형 참조가 기존의 참조 형식과 크게 다른 점이 무엇인지?*/

/*
기존 참조 
1. 변수에 대한 참조, 변수의 값 변경가능 
2. 변수에 대한 참조이기에 참조를 통해, 변수의 값을 변경하면 실제 변수 값도 변경된다.

상수형 참조( R-value)
1. 변수 또는 임시 값에 대한 참조, 값을 읽을 수만 있고, 변경할 수 없다.
2. 변수의 값을 읽기만 가능 */

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 20;
	int& nonConstRef = a; //기존 참조

	nonConstRef = 10; //값 변경 가능
	cout << nonConstRef << endl;

	const int b = 30;
	const int &constRef = b; //상수형 참조

	cout << constRef << endl;


	int&& rvalueRef = 10; //R-value
	// rvalueRef = b; 컴파일 오류 : r-value 는 값대입이 안되고 변경도 불가능하다.
	cout << rvalueRef << endl;
}
