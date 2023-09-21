/*비밀 일기 프로그램 만들기
프로그램에서는 처음 실행 시 비밀번호를 지정한다. 이후 프로그램을 실행할 때 입력한 비밀번호와 지정한 비밀번호를 비교합니다.
비밀번호가 맞으면 일기장 파일이 열리고 글을 작성한 후 저장할 수 있다 비밀 번호가 틀리면 경고 메시지를 출력한 후 종료한다.
여기서 파일 읽기와 쓰기는 fputs()와 fgets()함수를 이용한다.
*/

#define _CRT_SECURE_NO_WARNINGS //fopne 함수의 보안경고
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 10000

int main()
{
	char password[20];
	char c; // 입력받은 비밀번호 확인용(마스킹 효과)
	int i = 0; // 한 자씩 입력받기 * password 인덱스용 변수
	char line[MAX]; //-- 파일 읽어온 내용 저장
	char contents[MAX] = ""; // -- 일기장 내용 저장할 변수(빈 값으로 초기화)

	printf("비밀 일기에 오신 것을 환영하오!\n");
	printf("비밀 번호를 입력하세요(최대 20자리) : ");

	while (1)
	{ // -- 비밀번호 입력받기
		c = _getch();
		if (c == 13) // -- Enter-> 비밀 번호 입력 종료 13(ASCII) == Enter
		{
			password[i] = '\0';
			break;
		}
		else // --- 비밀 번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++; // 배열 인덱스 증가
	}
	printf("\n\n=== 비밀번호 확인 중 ===\n\n");

	// 지정한 비밀번호 저장
	if (strcmp(password, "skehzheld") == 0)
	{
		printf("\n\n=== 비밀 번호 확인 완료 ===\n\n");
		char* fileName = "D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\secretdiary.txt"; //파일명을 포인터 변수에 저장

		//a+ 모드는 파일이 없으면 생성, 파일이 있으면 뒤에서 부터 내용추가
		FILE* file = fopen(fileName, "a+b"); //파일 포인터 얻기
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}


		while (fgets(line, MAX, file) != NULL) { //-- fgets()함수로 파일 읽어오기
			printf("%s", line); //-- 파일에서 읽어 온 내용 출력
		}

		printf("\n\n 내용을 계속 작성하세요! 종료하려면 EXIT를 입력하세요!\n\n");
		while (1) {
			scanf("%[^\n]", &contents); //-- 줄 바꿈 문자(\n) 전까지 한 문장씩 읽어오기
			getchar(); //-enter입려해 줄바꿈 문자 플러시 처리

			if (strcmp(contents, "EXIT") == 0 || strcmp(contents, "exit") == 0)
			{
				printf("/n 비밀 일기를 종료합니다.\n");
				break; //일기 쓰기 종료
			}
				fputs(contents, file); //입력한 내용 파일 쓰기
				fputs("\n", file); //-- 줄 바꿈 문자를 파일에 추가
		}
		fclose(file); //파일 닫기
	}
	else
	{
		printf("=== 비밀번호가 틀렸어요, ===\n\n");
	}
	return 0;
}