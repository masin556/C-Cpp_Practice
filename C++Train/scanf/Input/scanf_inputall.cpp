#include <stdio.h>

int main() {
	float a, b;

	scanf("%f%f", &a, &b); //scanf�� ���Ȼ� ������ �ִ� (scanf_s �̷��� ����϶�� �Ǿ�����) 

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
}

//��� ����� �ٷ� ����ϰ� �� �� �� ���� 
