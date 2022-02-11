#include <stdio.h>

int main() {
	float a, b;

	scanf("%f%f", &a, &b); //scanf는 보안상에 문제가 있다 (scanf_s 이렇게 사용하라고 되어있음) 

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
}

//계산 결과를 바로 출력하게 할 수 도 있음 
