#include <stdio.h>

int main() {
	int a; //정수입력 변수

	printf("숫자 입력 : "); //입력 
	scanf("%d", &a); //해당 값 대입 
	printf("%d의 ASCII 값 : %c\n", a, a); 
}