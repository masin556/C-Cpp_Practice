/*
	n = 4 입력 줄 수가 n 
	한 줄당 홀수만 출력 
	1
	1 3
	1 3 5 -> 2 * i -1
	1 3 5 7 

	2k - 1
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) { // i 는 몇번째 행인지 
		for(int j = 1; j <= 2 * i - 1; j += 2){
			//for (int j = 1; j <= i; j++) { // 그 해당 행 안에서 
				printf("%d", j);
				//printf("%d ",2 * j - 1);
			}
			printf("\n");
		}	
}