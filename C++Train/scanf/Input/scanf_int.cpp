#include <stdio.h>

//�Է��� �޴� �Լ� scanf()

int main() {
	int a, b;

	scanf("%d%d", &a, &b); // &: ������ (������ �ص�) scanf ������ �ݵ�� ������ �Է�

	int plus = a + b;
	int minus = a - b;
	int multiply = a * b;
	int mok = a / b;
	
	printf("%d + %d = %d\n", a, b, plus);
	printf("%d - %d = %d\n", a, b, minus);
	printf("%d * %d = %d\n", a, b, multiply);
	printf("%d / %d = %d\n", a, b, mok);

}

// scanf�� �� �ִ� ���� �� �о���� �и��� ���ڸ� �����ؼ� �ϳ���%d�� ����. ���и� �Ǿ��ִٸ� �ȴ�. 