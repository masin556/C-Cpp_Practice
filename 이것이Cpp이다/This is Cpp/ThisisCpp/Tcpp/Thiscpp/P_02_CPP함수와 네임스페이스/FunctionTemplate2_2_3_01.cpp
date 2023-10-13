/*함수 템플릿
형식 -
template <typename T>
반환형식 함수이름(매개변수)
{

}
typename은 자료형
T는 자료형이다.
템플릿은 일종의 틀
판화에 틀을 찍어낸다는 느낌

예제에서 TestFunc() 함수는 템플릿 함수이다. 호출자가 어떤 실인수로 TestFunc()함수를 호출하는가에 따라 자동으로
다중 정의가 이루어진다.(사용자 코드에 의해 컴파일러가 다중 정의 코드를 만든다.
*/

#include "pch.h"

template <typename T>
T TestFunc(T a)
{
	cout << "매개변수 a: " << a << endl;

	return 0;
}

int main(int argc, wchar_t* argv[])
{
	cout << "int\t" << TestFunc(3) << endl;
	cout << "double\t" << TestFunc(3.3) << endl;
	cout << "char\t" << TestFunc('A') << endl;
	cout << "char*\t" << TestFunc("TestString") << endl;

	return 0;
}