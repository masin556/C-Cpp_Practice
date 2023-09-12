/*자라나라 머리카락 
약병 4개 중 어떤 게 진짜 발모제인지 찾는 게임. 
초 3회 테스트하는데 발모제를 한 번에 무작위로 2개 또는 3개 조합해 머리에 부었을 때
머리카락이 나는지 안 나는지 확인한다. 사용자는 테스트를 3회 진행하고 나서 진짜 발모제가 
몇 번인지 입력한다. 맞으면 정답 메시지를 틀리면 오답 메시지와 함께 정답 번호를 출력하는*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int treatment = rand() % 4;

	printf("===자라나라 머리카락! ==== Your Game is Start!\n");
	
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };

		do {
			cntShowBottle = rand() % 2 + 2;  // 조합할 약병 개수 0~1 + 2 -> 2 ~ 3
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle; // 이번 회차의 약병 개수를 저장

		printf(" > %d번째 테스트\n", i);

		int isInclude = 0;
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1; //값을 0 -> 1;

				if (randBottle == treatment) {
					isInclude = 1;  //진짜 발모제가 포함됨
				}
			}
			else {   //이미 선택된 약병이면 중복이므로 다시 선택
				j--;
			}
		}

		//사용자에게 테스트 결과 표시 
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) //선택된 약병인지 확인
			{
				printf("%d ", k + 1); // 인덱스 + 1, %d 뒤에 빈칸 하나 넣기
			}
		}
		printf("번 물약을 머리에 바릅니다\n\n"); //안내 문구
		if (isInclude == 1) {  // --- 약병 조합에 발모제가 포함된 경우
			printf(" >> 성공! 머리카락이 났어요!\n");
		}
		else {
			printf(" >> 실패! 머리카락이 나지 않았어요, ㅠㅠ \n");
		}
		printf("\n 계속하려면 Enter를 누르세요! \n");
		(void) getchar();  //Enter를 입력받아 다음 테스트 회차로 넘어가기

	}

	//사용자 입력받기
	printf("\n\n발모제는 몇 번일까요? ");
	int answer;  //사용자 입력 값을 받은 변수선언
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> 정답입니다!\n");
	}
	else {
		printf("\n >> 땡! 틀렸어요. 정닶은 %d 입니다.\n", treatment + 1);
	}

	return 0;
}