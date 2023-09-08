/* ASCII코드 출력*/

#include<stdio.h>

int main()
{
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 값 %d : %c\n", i, i);
	}
}