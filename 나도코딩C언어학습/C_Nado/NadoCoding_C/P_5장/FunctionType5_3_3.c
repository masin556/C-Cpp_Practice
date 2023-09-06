/*전달값이 없는 함수*/

#include <stdio.h>

void function_with_params();

int main()
{
	function_with_params();

	return 0;
}

void function_with_params()
{
	printf("전달값이 없는 함수입니다.\n");
}