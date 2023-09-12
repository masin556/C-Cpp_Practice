/*포인터로 배열다루기*/

#include <stdio.h>

int main()
{
#pragma region 포인터로배열에접근하기(7.3.1)
	int arr[3] = { 5, 10, 15 };
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	//포인터 변수에 값 입력 
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	////
	//포인터 변수의 값을 바꾸면 포인터 변수가 가리키는 배열의 값도 바뀐다. 
	////
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d \n", i, *(arr + i)); //arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("배열 ptr[%d]의 값 : %d \n", i, *(ptr + i)); //ptr[i]);
	}

	printf("arr자체의 값 : %p\n", arr);
	printf("arr[0]의 주소 : %p\n", &arr[0]);

	printf("arr자체 의 값인 주소의 실제 값 : %d\n", *arr);
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);


#pragma endregion

	return 0;
}
