/*배열 초기화*/

// 배열 한번에 초기화 : 자료형 배열명[배열크기] = {값, 값2, .... };

#include <stdio.h>

int main()
{
#pragma region 배열 초기화
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}

#pragma endregion

	printf("\n\n일부값 초기화 ");
#pragma region 배열 일부값 초기화
	int arr[10] = { 1, 2 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	// 대괄호 내부에 배열 크기를 지정하지 않고, 초기화 부분에 값만 넣어줘도 컴파일러가 자동으로 배열을 채워넣어준다. 
#pragma endregion

	printf("\n\n실수형");

#pragma region 실수형 배열 초기화
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

#pragma endregion 

	return 0;
}