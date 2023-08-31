/* 증감연산자 ++ */
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	printf("a는 %d\n", a); 
	
	//a + 1 더하기 
	//a = a + 1;  //a++
	//printf("%d 변경된 a\n", a);

	//1을 더해 변수에 넣는다.
	a++;
	printf("증감연산 a 는? : %d\n", a);

	a++;
	printf("증감연산 a 는? : %d\n", a);
	
	///////////b 
	//++을 후위에 두는 전위에 두든 연산 순서가 달라진다. 

	printf("b는 %d 이다.\n", ++b); //전위 - 먼저 1을 증가 한 후 출력 
	printf("b는 %d 이다.(증감)\n", b++); //후위 - 먼저 출력하고 작업을 수행한 후에 다음 줄로 넘어가기전에 1증가 
	printf("b는 %d 이다.(증감)\n", b); // 그래서 22출력 
	
	return 0;
}