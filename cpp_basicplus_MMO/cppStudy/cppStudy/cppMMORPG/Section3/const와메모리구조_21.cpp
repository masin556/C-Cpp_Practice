/*const와 메모리구조*/
#include <iostream>
using namespace std;

// 주제 : 데이터 연산

unsigned char flag; // 부호를 없애야 >> 하더라도 부호비트가 딸려오지 않는다.

// 한번 정해지면 절대 바뀌지 않을 값
// constant 의 약자 const를 붙임 (변수를 상수화 함)
// const를 붙이면 초기값을 반드시 지정해야 한다.

/* 보통 바뀌지 않는 값을 대문자로 표현하는 코딩컨벤션을 지키는 팀들이 있다. */


// const도 바뀌지 않는 읽기전용
// .rodata?
// 실제로 C++ 표준에서 꼭 그렇게 하라는 말이 없다.
// 컴파일러 마음대로(VS) 작동한다. 그러니 잘 모른다.
const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVICIBLE = 4;

// 전역 변수

// [데이터영역]
// .data (초기값 있는 경우)
int a = 2;

// .bss (초기값 없는 경우)
int b;

// .rodata (읽기 전용 데이터)
const char* msg = "Hello World";


int main()
{
	// [스택 영역]
	int c = 3;


#pragma region const
	// 0b0000 [무적][변이][스턴][공중부양]

	/*무적상태*/
	flag = (1 << INVICIBLE);

	/* 변이 상태를 추가 (무적 + 변이) */
	// flag |= 4; // 이것도 가능하겠지만.
	flag |= (1 << POLYMORPH);

	// 무적인지 확인하고 싶다? (다른 상태는 관심 없음)
	// bitmask : 필요 없는 부분은 가린다.
	bool bInvisible = ((flag & (1 << 3)) != 0);

	// 무적이거나 스턴 상태인지 확인하고 싶다면?
	bool bStunOrInvicible = ((flag & 0b1010) != 0);


#pragma endregion
}