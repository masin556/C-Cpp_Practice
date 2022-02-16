// 비교 연산자, 논리 연산자 Compare and logic

#include <stdio.h>

int main() {
	int a, b;

	printf("첫번째 값을 입력하시오");
	scanf("%d", &a);
	printf("두번째 값을 입력하시오");
	scanf("%d", &b); 

	//C에서 제공하는 것중 하나
	// bool : 진리값을 저장용 변수 (참 거짓 2가지만 저장) (1byte= 8bit 의 값) 
	//그래서int 말고 bool 사용
	bool p = a > b;
	bool q = a < b;
	bool r = a == b; // == 같다 비교연산자 

	printf("%d = %d > %d\n", p, a, b);
	printf("%d = %d < %d\n", q, a, b);
	printf("%d = %d == %d\n", r, a, b);
	// 2 > 3 = 거짓 
	// 참 : 1 , 거짓 : 0 P에 무엇이 들어가는가 

}

// a >= b : a는 b보다 크거나 같다 
// a <= b : a는 b보다 작거나 같다
// a != b : a는 b가 아니다