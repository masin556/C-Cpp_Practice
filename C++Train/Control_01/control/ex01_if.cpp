//컴퓨터에서 어 떠한 경우를 나눌때 사용한다. if문
// else는 if문의 조건이 만족하지 않을경우 실행 된다. 
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("n %d는 짝수입니다\n", n);
	}
	else {
		printf("n %d는 홀수입니다\n", n);
	}
}

//컴퓨터가 알아 듣기를 n % 2 일때 홀수 일때 1이 나오면 참이 됨 1이 나옴 
// 이진법 테크닉 등 