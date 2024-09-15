/*비교& 논리 연산*/
#include <iostream>
using namespace std;

// 주제 : 데이터 연산
// 데이터를 가공하는 방법

int a = 1;
int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;


//논리
bool test;

int hp = 100;
bool isInvisible = true; // 무적여부

int main()
{
#pragma region 비교연산
	// 언제 필요한가?
	// ex ) 체력이 0이 되면 사망
	// ex ) 체력이 30% 이하이면 궁극기를 발동 (100* hp / maxHp) 와 같이
	// ex ) 경험치가 100 이상이면 레벨업

	// a == b : a와 b의 값이 같은가?
	// 같으면 1, 다르면 0

	isSame = (a == b); // a가 b 같다면 1 틀리면 0 이 들어간다.

	// a != b : a와 b의 값이 다른가?
	// 다르면 1, 다르면 0
	isDifferent = (a != b);

	// a > b  : a가 b보다 큰가?
	// a >= b : a가 b보다 크거나 같은가?
	// 1 아니면 0
	isGreater = (a > b);

	// a < b : a가 b 보다 작은가?
	// a <= b : a가 b보다 작거나 같은가?
	isSmaller = (a < b);

#pragma endregion

#pragma region 논리 연산
	// 언제 필요? 조건에 대한 논리적 사고가 필요할 때 (여러 조건에 대한 판단)
	// ex ) 로그인 할 때 아이디도 같고 AND 비밀번호도 같아야한다.
	// ex ) 길드 해산 권한에 대한 길드 마스터 또는 어드민 계정이면 길드 해산이 가능하다 또는 둘 중 하나의 조건에 맞을 때 OR 논리연산자를 사용할 수 있다.

	// ! not
	// 0이면 1, 그 외 0
	test = !isSame; // 뒤집어준다 사실상 isDifferent의 의미


	// &&  and
	// a && b -> 둘다 1일 경우 1 , 그외는 0 (즉 둘다 만족해야한다.)
	test = (hp <= 0 && isInvisible == false); // 체력이 없고 무적도 아닌 것 = 죽음


	// ||  or
	// a || b -> 둘 중 한개만 1(true)여도 true 1, 둘다 0이면 0
	test = (hp > 0 || isInvisible == true); // 체력이 남아있고 무적상태인 경우 = 생존
	// !(hp <= 0 && isInvisible == false); 이런식으로도 만들 수 있다.
#pragma endregion
}