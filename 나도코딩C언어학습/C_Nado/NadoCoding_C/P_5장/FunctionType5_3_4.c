/*전달값이 있는 함수*/

#include <stdio.h>

void function_with_params(int num1, int num2, int num3);

int main(void)
{
	function_with_params(1, 2, 5);

	return 0;
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달 값이 있는 함수 입니다\n전달값은 %d, %d, %d입니다.", num1, num2, num3);
}