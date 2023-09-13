/*물고기 키우기
어항 6개에 물고기가 한 마리씩 들어있다. 게임 화면 상단에는 레벨 표시와 막대가 있다.
막대는 제한시간을 의미 시간이 지남에 따라 막대가 채워지고 어항의 물은 조금씩 줄어든다.
레벨 하나가 오르는 시간은 20초 레벨은 5까지 있고, 레벨이
올라갈 수록 물이 줄어드는 속도가 빨라진다. 물이 다 증발 하기 전에 어항에 부지런히
물을 줘서 물고기를 살려야 한다. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int LEVEL = 0;
int ARRAYFISH[6];
//어항 물주기
int* CURSOR;

//게임 초기화 함수
void initData();
//어항 물높이 출력
void printFishes();
//증발한 물의양
void decreaseWater(long elapsedTime);
//물고기 확인
int checkFishAlive();


int main(void)
{
	long startTime = 0;
	long totalElapsedTime = 0; //------총 경과 시간
	long prevElapsedTime = 0;  //------직전에 물을 준 시간(물을 준 시간간격)
	int num;  //물을 줄 어항 번호

	initData(); // 게임 초기화 함수 호출
	startTime = clock(); //프로그램 수행 이후 현재까지 흐른 시간을 시작 시간으로저장

	CURSOR = ARRAYFISH; // -- 포인터 변수에 어항 배열의 시작 주소 넣기

	while (1)
	{
		printFishes(); //어항 물 높이 출력 함수 호출
		printf("몇 번 어항에 물을 줄까요?(1~6) ");
		scanf_s("%d", &num);
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못됐습니다.\n");
			continue;
		}

		// 총 경과시간, 초단위로표시
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld초\n", totalElapsedTime); // 총 경과 시간 출력

		prevElapsedTime = totalElapsedTime - prevElapsedTime; //직전에 물 준 시간 이후로 흐른 시간
		printf("최근 경과 시간 : %ld초\n", prevElapsedTime);  // 최근 경과 시간 출력
		decreaseWater(prevElapsedTime); // 어항 물을 증발(감소)시키는 함수 호출

		//사용자 입력한 번호의 어항에 물주기
		if (CURSOR[num - 1] <= 0) { // -- 어항 물높이 0이하
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		else if (CURSOR[num - 1] + 1 <= 100) { // -- 어항 물높이 100이하
			printf("%d번 어항에 물을 줍니다. \n\n", num);
			//물을 주면 물 높이  + 1(CURSOR[num - 1] = CURSOR[num - 1] + 1
			CURSOR[num - 1] += 1;
		}


		//레벨 올리고 종료
		if (totalElapsedTime / 20 > LEVEL - 1) { //-- 레벨업 확인(20초마다 한번씩 수행)
			LEVEL++;
			printf("*** 축하합니다. %d레벨에서 %d레벨로 올랐습니다.! ***\n\n", LEVEL - 1, LEVEL);
			if (LEVEL == 5)
			{
				printf("\n\n축하합니다.! 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 물고기 확인
		if (checkFishAlive() == 0) { //---함수를 호출해 모든 물고기가 죽었는지 확인
			printf("모든 물고기가 죽었습니다. ㅠㅠ\n\n");
			exit(0);
		}
		else
		{
			printf("물고기가 아직마리 살아 있어요!\n\n");
		}

		//totalElapsedTime변수 값을 저장해야한다. 다음 반복에 활용하기 위함
		prevElapsedTime = totalElapsedTime;
	}
	return 0;
}

void initData()
{
	//전역변수 초기화
	LEVEL = 1;
	for (int i = 0; i < 6; i++)
	{
		ARRAYFISH[i] = 100; //어할 물 높이 초기화(물 높이 범위 0~ 100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("   %3d ", ARRAYFISH[i]); //서식 지정자로 출력 결과 정렬
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		ARRAYFISH[i] -= (LEVEL * 3 * (int)elapsedTime);
		if (ARRAYFISH[i] < 0) { // --- 물 높이가 0미만이면 물 높이는 0으로 고정
			ARRAYFISH[i] = 0;
		}
	}
}

int checkFishAlive() //----- 모든 물고기가 죽었는지 확인하는 함수
{
	for (int i = 0; i < 6; i++)
	{
		if (ARRAYFISH[i] > 0)
		{
			return 1;  // 참(true)
		}
	}
	return 0;
}