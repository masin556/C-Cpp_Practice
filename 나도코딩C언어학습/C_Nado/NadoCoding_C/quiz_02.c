/* 문자열 2개를 입력받아 출력하는 코드 */

#include <stdio.h>

int main(void)
{
	char str1[256];
	char str2[256];

	printf ("문자열을 입력하세요! : ");
	scanf_s ("%s", str1, 256);
	printf ("2번째 문자열을 입력하세요! : ");
	scanf_s ("%s", str2, (unsigned int) sizeof(str2));

	printf ("%s\n", str1);
	printf ("%s\n", str2);
}