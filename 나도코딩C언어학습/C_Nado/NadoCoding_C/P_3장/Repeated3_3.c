/* 출력 printf를 잔뜩 만들어 반복시키는 것은 비효율 적이고 코드가 보기도 좋지 않다. */
#include <stdio.h>

int main(void)
{
#pragma region for문
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}//printf를 10번 출력하게 된다.

#pragma region

#pragma region for문
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World! %d\n", i++);
		//i++;
	}
#pragma region

#pragma region do-while문
	int j = 1;
	do {
		printf("HelloWorld! %d \n");
	} while (i <= 10);
#pragma endregion

	return 0;
}