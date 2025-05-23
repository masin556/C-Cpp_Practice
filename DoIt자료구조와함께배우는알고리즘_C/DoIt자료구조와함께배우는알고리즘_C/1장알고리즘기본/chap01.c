/*세 정수 값을 입력하고*/
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max; /*최댓값*/

	printf("세 정수의 최댓값을 구한다.\n");
	printf("a 값 : "); scanf_s("%d", &a);
	printf("b 값 : "); scanf_s("%d", &b);
	printf("c 값 : "); scanf_s("%d", &c);

	max = a;
	if (b > max) 
		max = b;	
	if (c > max)
		max = c;

	printf("최댓값은 %d 입니다.\n", max);

	return 0;
}
