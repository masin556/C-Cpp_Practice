/*
1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만드시오
*/
#include <stdio.h>

int main() {
	int a, b;
	
	scanf("%d%d", &a, &b);

	int hap = a + b; //합이라는 변수를 굳이 여기에 쓸 필요없음 

	printf("%d\n", hap);//여기에 넣어도됨 
}

//실수도 

//%f float으로 바꿔줘도 똑같음
