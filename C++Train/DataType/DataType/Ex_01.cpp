#include <stdio.h>

int main() {
	//int : 32��Ʈ (4����Ʈ), ������ ��µ� ���δ�.

	/*int a = 5; // ��������
	int b = 3; // ��������

	int plus = a + b;
	int minus = a - b;
	int multiply = a * b;
	int portion = a / b; // ���� ������ �������� �Ǽ��� ���� ���ؼ� �׳� ���� ��ȯ�ϰԵ� 
	int division = a % b; //mod��°��� ���� ����ϰ� �߿� 

	printf("%d + %d = %d\n", a, b, plus);
	printf("%d - %d = %d\n", a, b, minus);
	printf("%d * %d = %d\n", a, b, multiply);
	printf("%d / %d = %d\n", a, b, portion);
	printf("%d %% %d = %d\n", a, b, division);*/

	
	//float : 32��Ʈ (4����Ʈ) : �Ǽ��� ��� �� ���δ�. �� 8�ڸ����� 
	//�Ǽ��� �����ϱ� ���ؼ��� ū �뷮�� �ʿ��ϴ�. �ٵ� float�� �뷮�� �۴� 
	//�׷��� ���ϱ⳪ �ٽ� ������ �Ҷ� (������ ���� ���� �׷��� Double�� �����) 

	float a = 9.8; 
	float b = 3.14; // a��� ĭ�� 314^-2 = 3.14 |+ | -2 | 314|

	float plus = a + b;
	float minus = a - b;
	float multiply = a * b;
	float portion = a / b; 

	printf("%f + %f = %f\n", a, b, plus);
	printf("%f - %f = %f\n", a, b, minus);
	printf("%f * %f = %f\n", a, b, multiply);
	printf("%f / %f = %f\n", a, b, portion);


	//double : 64��Ʈ (8����Ʈ) : �Ǽ��� ��� �� ���δ�.(���� ���� 2�谡 �Ǿ� ���� �þ�鼭 ��Ȯ���� �� ��������)

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

// float/double�� �ε��Ҽ���(floating point) �Ҽ����� �� �ƹ��볪 ���ٴ� �� �ִ�. 
// �¼��� ���̳ʽ� �κ��� �ٲ� ���� �Ҽ��� ��ġ�� �޶��� 
