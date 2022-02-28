//369게임  일의 자릿수가 3의 배수인 경우 *만 출력해라 
//1 2 * 4 5 * 7 8 * ~~~~~~~~~~~~~

#include <stdio.h>
//두들
int main() {
	int n; 
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
}



//내가 만든것 
/*
int main() {
	for (int i = 1; i <= 100; i++) {

		if (i % 3 == 0) {
			printf("*, ");
		}
		else printf("%d, ", i);
	}
}*/