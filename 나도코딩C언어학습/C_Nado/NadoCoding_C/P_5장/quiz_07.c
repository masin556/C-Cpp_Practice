#include <stdio.h>

//함수명을 같이 쓰면 오류 발생 
void my_func(int i); //호출인수가 적은 에러
void my_func(int i, int j);
void my_func(int i, int j, int k);  // 함수에 이미 본문있음 

int main(void)
{
	my_func(3, 5);

	return 0;
}


void my_func(int i)
{
	printf("첫번째\n");
}

void my_func(int i, int j)
{
	printf("두번째\n");
}

void my_func(int i, int j, int k)
{
	printf("세번째\n");
}