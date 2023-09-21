/*형식을 지정해 파일 입출력하기*/
/*
fprintf(파일포인터, "서식지정자", 값)
파일에 데이터를 저장한다. 
1. 첫번쨰 전달값에는 데이터를 저장할 파일포인터, 
2. 두번째는 서식 지정자를 마지막 전달값에 해당 서식 지정자에 매칭되는 값을 넣는다. 
서식지정자와 값은 개수를 맞춰야한다. 

fscanf(파일포인터, "서식지정자", &변수명);*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000


int main(void)
{
	char str1[MAX];
	char str2[MAX];
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //추첨번호 저장
	int bouns = 0; //보너스 번호 저장 초기화


	FILE* file = fopen("D:\\C-Cpp_Practice\\나도코딩C언어학습\\C_Nado\\P_10장Files\\test02.txt", "rb");
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file, "%s %d", str2, &bouns);
	printf("%s %d\n", str2, bouns);

	//fprintf()함수 사용
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6); //로또 번호 저장
	//fprintf(file, "%s  %d\n", "보너스 번호 ", 7);
	fclose(file);
	return 0;
}

