/*C++11에서 auto 예약어는 어떤의미인지 쓰고 코드로 예를 보이라
- auto : 
1. 반복문의 배열 횟수를 자동으로 맞춰 준다. 
2. 갯수 변화에 대한 조건식 수정이 필요없다. 
*/


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for (auto q : n) {
		cout << q << ' ';
	}

	return 0;
}
