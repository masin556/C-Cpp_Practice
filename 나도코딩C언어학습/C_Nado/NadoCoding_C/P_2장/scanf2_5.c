/*scanf() 입력받기*/
#include <stdio.h>

int main(void)
{
#pragma region scanf()_01
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);

	printf("입력값 : %d\n", input);*/

#pragma endregion 값입력


#pragma region scanf()_02
	/*int one, two, three;
	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

#pragma endregion
	

#pragma region scanfchar
	char c = 'A';
	printf("%c\n", c);
	
	char str[256];
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str)); // 사이즈 명시 
	printf("%s\n", str);


#pragma endregion
	return 0;
}

/*str[] sizeof unsigned error
= sizeof 연산자로 알아낸 변수 크기에 해당하는 값의 형태가 기대한 것과 다르다는 
에러가 있다. 

1. scanf_s("%s\n", str, (unsigned int) sizeof(str)); // 형변환
2. scnaf_s("%s\n", str, 256); //문자형 변수 크기 직접 입력
*/