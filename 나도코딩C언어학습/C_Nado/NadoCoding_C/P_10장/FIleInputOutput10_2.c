/*문자열 단위로 파일 입출력하기
파일을 읽고 쓰는 fputs(), fgets()  | fprintf(), fscanf() 함수들이 있다.
이 함수들은 쌍으로 사용하지만 섞일 수 있다.
*/


/*파일에서 데이터를 읽고 쓸 때는 먼저 fopne()함수를 열어서 파일 포인터를 얻어야한다.
1. 무슨파일을 열었는지
2. 파일을 어디까지 읽었는지
3. 파일의 끝에 도달했는지 등의 정보를 담음
형식 : FILE * 포인터명 = fopen(파일명, 파일모드);
파일여는 방식 :
r : 읽기전용 // r+
w : 쓰기 전용 // w+
a : 이어쓰기  // a+
읽기 전용과 쓰기전용 뒤
t : 텍스트 (사람)
b : 바이너리 데이터(컴퓨터)*/

#define _CRT_SECURE_NO_WARNINGS //fopen함수 에러 다른 환경에서 fopen_s가 활용이 안됨
#include <stdio.h>

//MAX값 사용시 10000으로 치환된다. 
#define MAX 10000

int main()
{
	char line[MAX];
#pragma region
	//FILE* file;
	//errno_t err = fopen_s(&file, "D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\test01.txt", "wb");
	//FILE* file = fopen("D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\test02.txt", "wb");
	FILE* file = fopen("D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\test01.txt", "rb");
	//if (err != 0)
	if(file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	//fputs(문자열, 파일포인터) = 1, 파일에 기록할 내용, 2. 파일포인터
	fputs("fput() 함수로 글을 써 볼게요\n", file);
	fputs("잘 써지는지 확인!\n", file);

#pragma endregion
	//파일에서 문자열을 읽어온다. fgets(변수명, 문자열최대크기, 파일포인터) 

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	//fopen()으로 파일을 열었다면 반드시 fclose()로 닫아줘야한다. 
	fclose(file);
	

	return 0;
}