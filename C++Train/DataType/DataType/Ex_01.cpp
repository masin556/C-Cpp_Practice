#include <stdio.h>

int main() {
	//int : 32비트 (4바이트), 정수를 담는데 쓰인다.

	/*int a = 5; // 변수저장
	int b = 3; // 변수저장

	int plus = a + b;
	int minus = a - b;
	int multiply = a * b;
	int portion = a / b; // 정수 나누기 정수여서 실수를 저장 못해서 그냥 몫을 반환하게됨 
	int division = a % b; //mod라는것을 많이 사용하고 중요 

	printf("%d + %d = %d\n", a, b, plus);
	printf("%d - %d = %d\n", a, b, minus);
	printf("%d * %d = %d\n", a, b, multiply);
	printf("%d / %d = %d\n", a, b, portion);
	printf("%d %% %d = %d\n", a, b, division);*/

	
	//float : 32비트 (4바이트) : 실수를 담는 데 쓰인다. 총 8자리까지 
	//실수를 저장하기 위해서는 큰 용량이 필요하다. 근데 float은 용량이 작다 
	//그래서 곱하기나 다시 나누기 할때 (오차가 많이 생김 그래서 Double을 사용함) 

	float a = 9.8; 
	float b = 3.14; // a라는 칸에 314^-2 = 3.14 |+ | -2 | 314|

	float plus = a + b;
	float minus = a - b;
	float multiply = a * b;
	float portion = a / b; 

	printf("%f + %f = %f\n", a, b, plus);
	printf("%f - %f = %f\n", a, b, minus);
	printf("%f * %f = %f\n", a, b, multiply);
	printf("%f / %f = %f\n", a, b, portion);


	//double : 64비트 (8바이트) : 실수를 담는 데 쓰인다.(저장 공간 2배가 되어 수가 늘어나면서 정확도가 더 좋아진다)

	double a = 9.8;
	double b = 3.14; 

	double plus = a + b;
	double minus = a - b;
	double multiply = a * b;
	double portion = a / b;

	printf("%f + %f = %f\n", a, b, plus);
	printf("%f - %f = %f\n", a, b, minus);
	printf("%f * %f = %f\n", a, b, multiply);
	printf("%f / %f = %f\n", a, b, portion);
}

// float/double은 부동소수점(floating point) 소수점이 막 아무대나 떠다닐 수 있다. 
// 승수의 마이너스 부분이 바뀔때 마다 소수점 위치가 달라짐 
