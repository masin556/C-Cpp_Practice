/*실습1 : 포인터로 두 변수의 값 교환하기*/
#include <stdio.h>

//변수를 전달 -> 값을 교환 
void swap(int a, int b);

//변수 주소를 전달 
void swap_addr(int* a, int* b);

int main()
{
	int a = 10;
	int b = 20; 
	printf("a의 주소 : %p\n", &a);
	printf("b의 주소 : %p\n", &b);

	printf("swap() 함수 호출 전 => a : %d, b :%d\n", a, b);
	
	swap(a, b);
	printf("swap() 함수 호출 후 => a : %d, b :%d\n", a, b);

	printf("\n swap_addr() 함수 호출 전 => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b); // 함수호출, 주소 전달
	printf("\n swap_addr() 함수 호출 후 => a : %d, b : %d\n", a, b);
	
	//함수 확인 
	return 0;
}

void swap(int a, int b)
{
	printf("swap()함수안에서 a 주소 : % p\n", &a);
	printf("swap()함수안에서 b의 주소 : %p\n", &b);
	int temp = a; 
	a = b; 
	b = temp;
	printf("swap() 함수 안 => a : %d, b :%d\n", a, b);
}

void swap_addr(int* a, int* b)
{
	printf("swap_addr()함수안에서 a의 주소 : %p\n", a);
	printf("swap_addr()함수안에서 b의 주소 : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr()함수 안 => a : %d, b : %d\n", *a, *b);
	//--- a와 b에 담긴 주소의 실제 값 출력
}