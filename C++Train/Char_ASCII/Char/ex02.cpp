#include <stdio.h>

int main() {
	char a;

	printf("문자입력 : ");
	scanf("%c", &a); // ex) t입력 107 
	printf("%c의 ASCII 값 : %d\n",a, a); // %c(문자) 에는 t가 %d(정수) 에는 107이 그대로 들어감 
}