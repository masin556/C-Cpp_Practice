/*
	n = 4 (행)
	1
	1 2 3
	1 2 3 4 5 
	1 2 3 4 5 6 7
	
	i번째 줄에서 출력되는 숫자의 갯수 2*i-1
*/

//답
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


//내가 (완료못함)
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