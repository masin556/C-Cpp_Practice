/*
	n = 4 (��)
	1
	1 2 3
	1 2 3 4 5 
	1 2 3 4 5 6 7
	
	i��° �ٿ��� ��µǴ� ������ ���� 2*i-1
*/

//��
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 2 * n - 1; i += 2){
	//for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++){
		//for (int j = 1; j <= 2 * i - 1; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}


//���� (�Ϸ����)
//#include <stdio.h>
//int main() {
//	int n; 
//	scanf("%d", &n);
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i + 2; j++) {
//			printf("%d", j); 
//		}
//		printf("\n");
//	}
//}