/*너 내 집사가 되어라!*/
/*큰 상자에서 고양이를 뽑아서 작은 상자에 넣고, 작은 상자에 서로 다른 고양이 5마리가 
모이면 끝난다. 큰 상자를 클릭할 떄마다 어떤 고양이가 나올지 모르고 같은 고양이가 나오면 다른 고양이가
나올 때까지 계속 뽑아야 한다.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//고양이 정보
typedef struct
{
	char* name; //이름
	char* character; //특징
	int age; //나이
	int level; //레벨 범위 1~5 숫자가 클수록 어려움
}CAT; //별명


//구조체 배열선언 
CAT cats[5];
// 고양이를 담을상자
int collection[5] = { 0, 0, 0, 0, 0 };

//구조체의 정보 사용
void init_Cats();
//뽑은 고양이의 정보를 출력
void Print_Cat(int selected);

//5마리를 다 모았는지 확인 
int RCheck_Collection();

int main(void)
{
	srand(time(NULL));
	init_Cats();


	while (1)
	{
		printf("둑근둑근! 어느 고양이가 집사가 될까?!\nEnter를 눌러 확인하세요!"); //-안내문구
		getchar(); //Enter입력받기
		int selected = rand() % 5; // 고양이 뽑기 0 ~ 5;
		
		Print_Cat(selected); //뽑은 고양이 정보;

		collection[selected] = 1;
		int collectAll = RCheck_Collection();

		//고양이를 다 모으면 무한 반복문 탈출
		if (collectAll == 1) {
			break;
		}
	}
	return 0;
}

void init_Cats() //고양이 정보 초기화 함수 정의
{
	//typedef struct에 CAT별명을 가진 곳에 cats 배열이 CAT의 구조체의 정보를 갖고 있다.
	//0번째 인덱스의 배열에 들어갈 값의 초기화
	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순함";
	cats[0].level = 1;

	//1번째
	cats[1].name = "귀요미";
	cats[1].age = 3;
	cats[1].character = "까칠함";
	cats[1].level = 2;

	//2번째
	cats[2].name = "수줍이";
	cats[2].age = 7;
	cats[2].character = "잠이 많음";
	cats[2].level = 3;

	//3번쨰
	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "시끄러움";
	cats[3].level = 4;

	//4번쨰 -- 5번배열끝
	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "늘 배고픔";
	cats[4].level = 5;
}


void Print_Cat(int selected)
{
	printf("\n\n== 당신은 다음 고양이의 집사가 됐어요! ===\n\n");

	printf(" 이름 : %s\n", cats[selected].name);
	printf(" 나이 : %d\n", cats[selected].age);
	printf(" 특징 : %s\n", cats[selected].character);
	printf(" 레벨 : ");
	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "★");
	}
	printf("\n\n");
}

int RCheck_Collection() 
{
	int collectAll = 1;
	//보유한 고양이 모록을 출력하고 5마리 다 모았는지 확인
	printf("\n\n==== 보유한 고양이 목록이예요 ====\n\n");

	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0)
		{
			printf("%10s","(빈 상자!)");
			collectAll = 0;  //고양이를 다 모으지 못한 상태
		}
		else
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n=========================================\n\n");
	if (collectAll) {
		printf("\n\n축하합니다! 고양이 5마리를 모두 모았어요! 열심히 키워주세요.\n\n");
	}
	return collectAll;
}