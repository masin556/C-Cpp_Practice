/*산술연산*/
#include <iostream>
using namespace std;

// 주제 : 데이터 연산
// 데이터를 가공하는 방법에 대해서 

// a[ 1]
// a라는 이름의 바구니를 할당하고 안에 1을 넣는다.
int a = 1; 

// b[ 2]
// b라는 이름의 바구니를 할당하고 안에 2를 넣는다.
int b = 2;

int main()
{
#pragma region 산술연산
	// 사칙연산
	// 대입연산
	// 산술연산자


	// a에 b를 대입하고 b를 반환하라
	// -> b라는 바구니 안에 있는 값을, a라는 바구니 안에다 복사한다.
	a = b;
    // a = (b = 3);
	// a = b = 3;
	// b = 3;

	// 사칙연산
	// 언제 필요한가?
	// ex) 데미지 계산
	// ex) 체력을 깍는다거나
	// ex) 루프문에서 카운터를 1증가 시킨다거나. 


	a = b + 3; // 덧셈 assemble : add
    a = b - 3; // 뺄셈 assemble : sub
	a = b * 3; // 곱셈 assemble : mul
	a = b / 3; // 나눗셈 assemble : div
	a = b % 3; // 나머지 assemble : div

	a += 3; // a = a + 3;
	a -= 3;
	a *= 3;
	a /= 3;
	a %= 3;


	// 증감연산자 
	a = a + 1; // add eax, 1 -> inc eax
	a++;
	++a;
	a--;
	--a;

	b = a++; // 2가지의연산 b = a에 대입 a를 1 증가
	b = ++a; // a를 1증가 시키고 -> b = a 대입

	b = a + 1 * 3; // 곱셈이 우선순위가 먼저온다. 만약 a+1하고 한다면 괄호를 사용해 감싸주어서 우선순위를 바꾼다.


#pragma endregion


}

