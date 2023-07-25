#include <iostream>
using namespace std;


unsigned char flag; //부호를 없애야 >>를 하더라도 부호 비트가 딸려오지 않는다. 

int main()
{
#pragma region 비트 연산
	//실습
	//0b0000 [무적][변이][스턴][공중부양]
	//무적상태로 만든다. 
	flag = (1 << 3);

	//변이 상태를 추가한다 (무적 + 변이)
	flag |= (1 << 2);

	//무적인지 확인하고 싶다? (다른 상태는 
	//bitmask 
	bool invincible = ((flag & (1 << 3)) != 0); //필요한 값만 남기고 나머지는 날린다.
	//가면을 씌어서 필요한 것을 추출했다.

	// 무적이거나 스턴 상태인지 확인하고 싶다면?
	//bool mask = (1  << 3) | (1 << 1); 이와 같이 도 표현 가능 
	bool stunOrInvincible = ((flag & ob1010) != 0); //2개중 하나라면 0이 아닌값으로 //위 mask를 씌어 줄 수도 있다. 
#pragma endregion
}