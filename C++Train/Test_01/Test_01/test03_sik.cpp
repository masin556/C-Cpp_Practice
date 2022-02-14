/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요(z 제외)
*/
#include <stdio.h>

int main() {
	int Alphabet;
	
	printf("알파벳을 입력하시오 : ");
	scanf("%c", &Alphabet);

	printf("입력한 알파벳 : %c, 다음 알파벳 : %c\n", Alphabet, Alphabet + 1); 
}