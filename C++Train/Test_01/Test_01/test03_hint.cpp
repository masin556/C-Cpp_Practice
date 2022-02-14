/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요(z 제외)
*/
#include <stdio.h>

int main() {
	char alpha; //문자형으로 불러들임 

	scanf("%c", &alpha);
	
	char nextalpha = alpha + 1;

	printf("%c\n", nextalpha); // nextalpha 대신 alpha + 1 을 넣어줘도됨 
}