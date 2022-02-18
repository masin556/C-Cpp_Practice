//중첩 if 문
//중괄호 코딩 스타일 

#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	//if 중첩시 예를들어 2개의 if문이 만족을 해야 안쪽으로 들어간다.
	if (a > b) {
		//a > b > c
		// a > c > b
		// c > a > b
		if (a > c) {//이처럼 2번째if문이 만족해야 이if문 안에 들어간다. 
			printf("%d\n", a);
		}
		else { //c > a
			printf("%d\n", c);
		}
	}
	else {// b>a
		if (b > c) {
			printf("%d\n", b);
		}
		else { //c > b
			printf("%d\n", c);
		}
	}
}
