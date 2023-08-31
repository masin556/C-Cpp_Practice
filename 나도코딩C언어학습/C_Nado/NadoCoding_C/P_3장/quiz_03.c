/* 결과 */
#include <stdio.h>

int main(void)
{
	int num = 10;
	printf("%d\n", num++); // 10 출력 후 넘어가면서 11이 됨
	printf("%d\n", ++num); // 받은 11을 12로 증가 시키고 출력

	return 0; 
}