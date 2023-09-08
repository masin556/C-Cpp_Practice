/*배열이란*/

#include <stdio.h>

int main(void)
{
#pragma region 배열
	int subway_array[3]; //배열 선언 > 자료형 배열명[배열크기];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	}

#pragma endregion
	return 0; 
}