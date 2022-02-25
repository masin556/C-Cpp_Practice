// continue : 하위에 아무리 넣어도 그 해당 안에 있는 것을 뛰어 넘고 다시 위에 변수를 실행 시켜준다

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	//1 +2+4+5+7+8+10+11+13

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0) {
			continue; // 지금 현재 있는 루프를 한번 건너 띄겠다는 의미
			//sum += i; ////이렇게 쓰임 
		}
	}
	printf("%d\n", sum);
}