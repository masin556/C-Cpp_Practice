#include <iostream>

using namespace std;

// 유의사항

// 1) 변수의 유효범위

//전역 변수
// int hp = 10;

//스택
// {   } 중괄호의 범위가 생존 범위 
// 같은 이름 두번 사용시 문제


// 2) 연산 우선 순위
//

// 3) type 변환 : 바구니를 교체 한다 형식을 교체한다는 의미 


// 4) 사칙 연산


int main()
{
	//지역 변수 (유효범위가 복잡해짐)
	int hp = 123;
	cout << hp << endl;
#pragma region 짝수여부
	
	//짝수 여부 우선순위
	bool isEven = (hp % 2 == 0);

	// 짝수 이거나 3으로 나뉘는 값인지 (괄호로 감싸서 하는 법)
	bool isEvenOrDivby3 = ((hp % 2) == 0 || (hp % 3) == 0);

#pragma endregion

	//바구니 교체
	short hp2 = hp; // 윗쪽 비트 데이터가 잘린 상태로 저장된다. 
	float hp3 = hp; // 실수로 변환시 정밀도 차이가 있어 주의 필요 
	unsigned int hp4 = hp; // 비트 단위로 보면 같으나, 분석하는 방법이 달라진다.


	//곱셈 오버플로우 주의

	//나눗셈 0으로 나눌시 주의

	int maxHp = 1000;
	float ratio = hp / (float)maxHp;
}
