#include<stdio.h>

int main() {
	int  i = 1;

	repeat:
	printf("%d\n", i);
	if (i < 10) {
		i++;
		goto repeat;//약간 while문과 비슷해 질 수 있음 (반복적인 요소 구현이 가능)  
	}
	//다만 goto는 사용하지 않는게 좋음 
}