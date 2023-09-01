/*구구단 프로그램의 일부를 수정한 코드 입니다. 여기서는 구구단을 5~7단 만 출력하고 각 단은 
3~5번만 곱한다. 실행결과와 똑같이 나오게 하려면?*/

#include <stdio.h>
int main(void)
{
	for (int i = 5; i < 8; i++)
	{
		printf("%d단 출력\n", i);
		for (int j = 3; j < 6; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}