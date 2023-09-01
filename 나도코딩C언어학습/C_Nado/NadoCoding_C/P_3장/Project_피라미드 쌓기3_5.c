/*Project Pyramid를 쌓아라!*/
#include <stdio.h>
int main(void)
{
	int floor = 0; //변수선언
	printf("몆 층을 쌓겠습니까? : "); //질문
	scanf_s("%d", &floor); // 층 입력받기

	for (int i = 0; i < floor; i++) // 몇 층이 쌓이는 지 행을 나타냄
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}