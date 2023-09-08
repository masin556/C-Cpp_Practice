/*비밀번호 마스터 게임 만들기
1. 정수 2개를 곱한 값을 맞히는 프로그램
문제가 나오고 정답을 맞히면 '성공' 틀리면 '실패'를 출력한다.
문제를 맞힐 때마다 다음 문제는 어려워지고 문제를 모두 푼 후에는 맞힌 개수를 알려준다.
문제를 5개로 지정 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	srand(time(NULL));

	//문제 x * y = ?
	int count = 0; // 맞힌 갯수

	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		//printf("%d x %d = %d\n", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer); // 답입력

		if (answer == -1)
		{
			printf("프로그램을 종료합니다.\n");
			exit(0); //
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
			printf("\n >> 정답은 %d 이다.\n", num1 * num2);
		}
	}
	printf("\n\n 비밀번호 %d개를 맞췄습니다. \n", count);
	return 0;
}

int getRandomNumber(int level)
{
	//level 1 = 1~9 , level 5 = 1~45
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d번째 비밀번호 #########\n", level); // 문제단계 출력
	printf("\n\t%d x %d ? \n\n", num1, num2); //문제 출력
	printf("####################################\n"); //구분
	printf("\n비밀번호를 입력하세요.(종료를 원하면 -1 입력 >> "); //정답입력안내
}

void success()
{
	printf("\n >> 성공이오!\n");
}

void fail()
{
	printf("\n >> 실패했소!\n");
}