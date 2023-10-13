/*범위 기반 for문*/

/* for문은 대부분 일정횟수를 중심으로 반복한다.(while문은 반복 횟수보다는 조건을 중심으로 반복한다.)
배열 자료구조에 접근할 때 for문을 자주사용(이는 배열의 요소가 선언할 때 확정되기 때문

형식 - 
for(auto 요소변수 : 배열이름)
	반복 구문;
-
반복 횟수는 배열 요소 개수에 맞춰 자동으로 결정된다.
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, wchar_t argv[])
{
	int aList[5] = { 10, 20, 30, 40, 50 };


	cout << "전형적인 C 스타일 반복문" << endl;
	//전형적인 C 스타일 반복문
	for (int i = 0; i < 5; i++) {
		cout << aList[i] << ' ';
	}

	cout << "\n" << endl; // 줄바꿈

	cout << "범위 기반 C++11 스타일 반복문" << endl;
	//각 요소의 값을 n에 복사한다.
	for (auto n : aList) {
		cout << n << ' ';
	}

	// ' ' 띄어쓰기
	cout << endl; // 줄바꿈

	// n은 각 요소에 대한 참조이다.
	for (auto& n : aList) {
		cout << n << ' ';
	}

	cout << endl; // 줄바꿈

	return 0;
}