// 전치와 후치 

#include <stdio.h>

int main() {
	int a = 10;
	int b;

	/*
	printf("=== 전치 증가 연산 ===\n");
	
	//a에 먼저 1를 증가 시키고 그다음에 b에다 a 를 대입하라 
	b = ++a; //b에다 ++a를 대입한다.  
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	//결과 : a : 11 b : 11
	*/

	printf("=== 후치 증가 연산 ===\n");
	//후치연산은 b에 a를 먼저 저장한다.  b = 10 a값을 저장하고 다음 a에 1을 더해라 
	//a++
	b = a++; //따로 작성 하는 경우도 많음 
	//a++ //위아래도 후치 해도 결과는 똑같음 
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}