/*
	n = 4 �Է� �� ���� n 
	�� �ٴ� Ȧ���� ��� 
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

	for (int i = 1; i <= n; i++) { // i �� ���° ������ 
		for(int j = 1; j <= 2 * i - 1; j += 2){
			//for (int j = 1; j <= i; j++) { // �� �ش� �� �ȿ��� 
				printf("%d", j);
				//printf("%d ",2 * j - 1);
			}
			printf("\n");
		}	
}