/*포인터로 배열의 값 바꾸기*/

#include <stdio.h>

void changeArray(int* ptr);


int main()
{
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}
	return 0;
}

void changeArray(int* ptr)
{
	ptr[2] = 50; //배열의 세 번째 요소의 값을 50으로 바꾸기
}