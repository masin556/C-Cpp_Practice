/*반환값이 있는 함수타입*/

#include <stdio.h>

int function_with_return();
void p(int num);

int main()
{
	int ret = function_with_return(); //변수선언과 동시에 저장
	//ret = function_with_return();
	
	p(ret);

	return 0;
}


int function_with_return()
{
	printf("반환값이 있는 함수 입니다.\n");

	return 10;
}

void p(int num)
{
	printf("num은 %d\n", num);
}