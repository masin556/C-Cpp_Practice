#include <iostream>
using namespace std;


unsigned char flag; //부호를 없애야 >>를 하더라도 부호 비트가 딸려오지 않는다.

//한번 정해지면 바뀌지 않을 값들
// constant의 약자 const를 붙인다. (변수를 상수화 한다함)
// const를 붙였으면 초기값을 반드시 지정해야한다.


// C++ 표준에서 const가 바뀌지 않으니까. 읽기전용이라 생각하지만
// 그냥 컴파일러 (VS) 마음대로 (실질 적으로 메모리에 할당이 안되어있다?)

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
//const int FEAR = 3; // 하나가 추가 되면 코드를 고치기 않아도 변경 가능
const int INVINCIBLE = 3;

//전역변수
// [데이터 영역]
// .data (초기값이 있는 경우)
int a = 2;

// .bss (초기값이 없는 경우)
int b;

// .rodata (읽기전용 데이터)
const char* msg = "Hello World!";

int main()
{
	// [스택영역]
	int c = 3;


#pragma region 비트 연산
	//실습
	//0b0000 [무적][변이][스턴][공중부양]
	//무적상태로 만든다.
	flag = (1 << INVINCIBLE);

	//변이 상태를 추가한다 (무적 + 변이)
	flag |= (1 << POLYMORPH);

	//무적인지 확인하고 싶다? (다른 상태는
	//bitmask
	bool invincible = ((flag & (1 << INVINCIBLE)) != 0); //필요한 값만 남기고 나머지는 날린다.
	//가면을 씌어서 필요한 것을 추출했다.

	// 무적이거나 스턴 상태인지 확인하고 싶다면?
	//bool mask = (1  << 3) | (1 << 1); 이와 같이 도 표현 가능
	bool stunOrInvincible = ((flag & 0b1010) != 0); //2개중 하나라면 0이 아닌값으로 //위 mask를 씌어 줄 수도 있다.
#pragma endregion
}