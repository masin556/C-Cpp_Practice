#include <stdio.h>

int main() {
	float a, b;

	scanf("%f%f", &a, &b); 

	float plus = a + b;
	float minus = a - b;
	float multiply = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, plus);
	printf("%f - %f = %f\n", a, b, minus);
	printf("%f * %f = %f\n", a, b, multiply);
	printf("%f / %f = %f\n", a, b, mok);

}