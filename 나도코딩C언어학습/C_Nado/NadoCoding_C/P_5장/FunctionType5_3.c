/*함수의 종류*/

#include <stdio.h>

void function_without_return(); //함수선언


int main()
{
	function_without_return(); //반환값이 없는 함수 호출 
	
	return 0;
}


void function_without_return() //함수 정의
{
	printf("반환값이 없는 함수입니다.\n");
}
