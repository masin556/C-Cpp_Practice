/*영어 단어 공부를 위한 퀴즈 프로그램
1. 메모장으로열고 다음과 같이 영어 단어와 뜻을 띄어쓰기로 구분해 입력한다.
book 책 
price 가격
window 창문

2. 메뉴 > 다른 이름으로 txt파일저장 > 인코딩(ANSI로 변경 C 프로그램에서 한글이 깨지지 않도록함)
3. 파일을 읽어와서 순서대로 하나씩 뜻을 보여 준 뒤에 사용자로 부터 영어 단어를 
입력받아 정답 여부를 출력하고 다음 단어로 넘어간다. 반복문 총 3회 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char word[256] = ""; //단어
	char definition[256] = ""; //뜻
	char input[256] = ""; //사용자 입력

	FILE* file = fopen("D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\Word.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	
	for (int i = 0; i < 3; i++) {
		(void)fscanf(file, "%s %s", word, definition);
		printf("'%s'(이)라는 뜻을 가진 영어 단어는? ", definition);
		scanf_s("%s", input, (unsigned int)sizeof(input));
		
		if (strcmp(input, word) == 0)
		{
			printf("%s, 정답 입니다.\n\n", word);
		}
		else
		{
			printf("틀렸습니다. 정답은 %s 입니다. \n\n", word);
		}
	}
	fclose(file);

	return 0;
}