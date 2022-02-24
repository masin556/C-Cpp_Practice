#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, sum;
	for (i = 1, sum = 0; i <= n; sum += i, i++); //중괄호를 쓰지 않고도 사용이 가능하다

	printf("%d\n", sum);
}// 입력값을 더하면 어떻게 되는가. ? 