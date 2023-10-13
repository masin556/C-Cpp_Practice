/*char[12] 배열 메모리를 new 연산자로 동적할당하고 해제하는 코드 예를 작성하시오*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char *wChar = new char[12];

	cout << "단어를 입력하세요 : ";
	cin >> wChar;

	cout << wChar << endl;

	delete[] wChar;

	return 0;
}

