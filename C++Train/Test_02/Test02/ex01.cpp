// 연산자 : + - / * % += -= ++ -- && || !
// 제어문 : 조건문 if(), switch(), 반복문 : while(), for()

// 1. 시험 점수를 입력 받는다 
// 90~100 A 
// 80~89 B
// 70~79 C
// 60~69 D
// 50~59 E
// 그외 F

#include <stdio.h>
//두들낙서

int main() {
	int score;
	scanf("%d", &score);

	if (score > 100 || score < 0) {
		printf("잘못 입력하셨습니다\n");
	}
	else if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80) {
		printf("B\n");
	}
	else if (score >= 70) {
		printf("C\n");
	}
	else if (score >= 60) {
		printf("D\n");
	}
	else
		printf("E\n");
	}
}






//내가 푼방식
/*int main() {
	int score;
	scanf("%d", &score);

	if (90 <= score) {
		printf("A");
	}
	else if (80 <= score) {
		printf("B");
	}
	else if (70 <= score) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else if (score >= 50) {
		printf("E");
	}
	else printf("F");
}*/