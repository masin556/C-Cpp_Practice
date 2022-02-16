// 논리 연산자 q and p 같은 
// 2개의 명제 ( 그리고, 또는)
// &&(AND) ||(OR) !(~가 아니다) 

#include <stdio.h>

int main() {
	int a; 

	printf("논리연산에 필요한 정수 하나를 입력해주세요 : ");
	scanf("%d", &a);

	bool p = (a >= 1) && (a <= 10); // 1 <= a <= 10과 같은의미  //  둘다 만족 해야함 1 이상 10이하의 수만 
	bool q = a == 3 || a == 7; // 둘 중의 하나만이라도 만족 되면 q가 1이 된다
	bool r = !q; //q가 아니다. 위조건이 만족하지 안을경우 r이 1이됨 

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}