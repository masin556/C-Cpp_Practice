#include <stdio.h>

//입력을 받는 함수 scanf()

int main() {
	int a, b;

	scanf("%d%d", &a, &b); // &: 포인터 (앤포스 앤드) scanf 쓸때는 반드시 포인터 입력

	int plus = a + b;
	int minus = a - b;
	int multiply = a * b;
	int mok = a / b;
	
	printf("%d + %d = %d\n", a, b, plus);
	printf("%d - %d = %d\n", a, b, minus);
	printf("%d * %d = %d\n", a, b, multiply);
	printf("%d / %d = %d\n", a, b, mok);

}

// scanf는 들어가 있는 수를 쭉 읽어오고 분리된 숫자를 구분해서 하나의%d로 들어간다. 구분만 되어있다면 된다. 