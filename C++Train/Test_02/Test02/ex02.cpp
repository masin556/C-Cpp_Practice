//자연수 입력 : 12 출력
// 1, 2, 3, 4, 6, 12,.... 약수

#include <stdio.h>

int main() {
	int n; 
	scanf("%d", &n);

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}

	printf("%d\n", n);//마지막 출력때 쉼표가 안나오게 하기 
}


// 내가한 것
/* 
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) { // 나누어서 나머지가 0일때 
			printf("%d,", i);
		}
	}
}
*/