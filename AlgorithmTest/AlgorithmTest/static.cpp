/*static이 붙은 변수에 대한 실행*/

#include <stdio.h>

void initialize()
{
	static int initialized = 0;
	if (!initialized)
	{
		printf("초기화...\n");
		initialized = 1;
	}
	else
	{
		printf("초기화 완료\n");
	}
}

void compare_variables() {
	int local_var = 0;
	static int static_var = 0;
	int static_varNO = 0;

	local_var++;
	static_var++;
	static_varNO++;

	printf("일반:%d, static: %d\n", local_var, static_var);
	printf("일반:%d, staticNO: %d\n", local_var, static_varNO);
}

int main()
{
	printf("첫 번째 호출:\n");
	compare_variables();

	printf("두 번째 호출:\n");
	compare_variables();

	printf("세 번째 호출:\n");
	compare_variables();

	initialize();
	initialize();

	return 0;
}