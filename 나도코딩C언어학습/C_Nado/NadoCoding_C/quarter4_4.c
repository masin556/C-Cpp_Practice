/*switch 문 사용전 난수생성하기
rand()함수 사용하기
rand() : time.h \ stdlib.h 파일 추가*/
#include <stdio.h>
//난수생성을 위한 라이브러리
#include <time.h> // 시간 관련 함수들
#include <stdlib.h> // 난수 생성과 문자열 변환등을 수행하는 함수들

int main()
{
	// rand 함수의 형식 : rand() % 어떤 수;
	// 어떤 수는 내가 뽑고 싶은 숫자의 범위를 지정하는 역할 즉 3이면 0~2 까지 범위
	// 항상 난수 생성시 초기화 필요 srand(time(NULL));
	// unsigned 에러시 난수 초기화 = > srand((unsigned int) time(NULL));

#pragma region 랜덤0_9사이10번뽑기

	//printf("난수 초기화 이전...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % 10);
	//}// 항상 똑같은 수가 나온다(초기화X)
	//printf("똑같은수 : 1 7 4 0 9 4 8 8 2 4");


	//srand(time(NULL));
	//printf("\n\n난수 초기화 이후...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % 10);
	//}

#pragma endregion

#pragma region 가위 바위 보
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("잘 못 됐다\n");
	}


#pragma endregion
	return 0;
}