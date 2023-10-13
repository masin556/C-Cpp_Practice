/*int형 배열을 오름차순으로 정렬후 결과를 출력하는 프로그램 작성
단 화면에 배열 내용 출력시 범위 기반for문을 사용*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int aList[5] = { 10, 20, 30, 40, 50 };

	for (auto q : aList)
	{
		cout << q << ' ';
	}

	return 0;
}