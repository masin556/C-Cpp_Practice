/*문자열 다루기*/

//문자 : char  서식지정자 : %c
//문자열 : 


#include <stdio.h>



int main()
{
#pragma region 문자 출력
	char c = 'A';
	printf("%c\n", c);

#pragma endregion

	printf("\n\n");

#pragma region 배열에 문자열저장
	//char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	//printf("%s\n", str);

#pragma endregion

#pragma region 배열에 문자열저장
	//char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str)); // 배열의 사이즈를 알 수 있다.

#pragma endregion

#pragma region 배열의 for문 size
	char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}
#pragma endregion

	printf("--------------------\n\n");

#pragma region 배열에한글저장하기6_4_2
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));

#pragma endregion
	printf("--------------------\n\n");

	char str2[] = "Practice makes perfect"; //널 문자하나더 들어가서 23개
	printf("%d\n", (int)sizeof(str2));

	return 0;
}