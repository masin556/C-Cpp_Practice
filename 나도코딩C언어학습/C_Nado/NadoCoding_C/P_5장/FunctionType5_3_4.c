/*���ް��� �ִ� �Լ�*/

#include <stdio.h>

void function_with_params(int num1, int num2, int num3);

int main(void)
{
	function_with_params(1, 2, 5);

	return 0;
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���� ���� �ִ� �Լ� �Դϴ�\n���ް��� %d, %d, %d�Դϴ�.", num1, num2, num3);
}