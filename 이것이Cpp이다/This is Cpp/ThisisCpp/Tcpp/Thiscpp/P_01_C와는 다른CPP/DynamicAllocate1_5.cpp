/*메모리 동적 할당*/

//C에서 사용하던 malloc 과 free를 없애고, new 와 delete 연산자를 기억하면된다.
// new 와 delete안에서 malloc 과 free 함수를 호출한다.  (편의성이 좋아졌다)


/*1.5.1 new와 delete연산자
: C++에서 객체를 동적 할당하고 해제하는 '연산자'

단일형식 >
형식 *변수이름 = new 형식;
delete 변수이름;

배열형식 >
형식 *변수이름 = new 형식[요소개수];
delete[] 변수이름;

*/

#include "pch.h"
#include <iostream>

using namespace std;

int wmain(int argc, wchar_t * argv[])
{
#pragma region new 연산자 사용
	//인스턴스만 동적으로 생성
	cout << "\n" << "인스턴스만 동적으로 실행" << endl;
	int* pData = new int; // 선언 및 초기화


	//초깃값을 기술할 시
	int* pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
#pragma endregion


#pragma region 배열형태의객체생성
	//객체를 배열 형태로 동적 생성
	cout << "\n\n" << "객체를 배열 형태로 동적 생성" << endl;
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

#pragma endregion
	return 0;
}
