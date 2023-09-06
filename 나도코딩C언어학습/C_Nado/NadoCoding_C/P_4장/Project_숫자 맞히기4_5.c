/* 상대방이 정한 숫자를 정해진 횟수 안에 맞혀야 하는 게임
컴퓨터가 상대방 (난수 생성)
난수 범위 1~100 난수로 생성한 숫자는 변수 num으로 선언
컴퓨터 숫자 출력 -> 이 값을 정답과 비교, 사용자가 입력한 값을 저장할 변수 answer를 선언
답할 횟수는 5회 변수 chance
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int num = rand() % 100 + 1; //computer

	int answer = 0; //user 저장변수

	int chance = 5; //답할 기회

	while (chance > 0)
	{
		printf("숫자를 입력해주세요 기회는 5번입니다. : \n");
		scanf_s("%d", &answer);
		if (answer < num)
		{
			printf("UP!\n");
			chance--;
		}
		else if (answer > num)
		{
			printf("DOWN!\n");
			chance--;
		}
		else if (answer == num)
		{
			printf("정답입니다!\n");
			chance--;
			break;
		}
		else
		{
			printf("지금 뭐하시는거죠?\n");
			chance--;
		}

	}

	if (chance > 0)
	{
		printf("\n\n정말 잘하시는군요?!\n");
	}
	else
	{
		printf("\n\n뭐하냐...? 컴퓨터는 %d 선택하였습니다.\n", num);
	}
	return 0;
}