/*동물카드 뒤집기
동물 카드 뒤집기는 카드를 뒤집어 같은 동물을 찾는 게임이다.
카드 앞면에는 각각 다른 동물이 있고, 뒷면에는 모두 동일한 그림이 있다.
총 10종이고 1종당 카드가 2장씩, 총 20장이 있다. 처음에는 모두 뒷면이 보이고
사용자는 같은 동ㅁ루을 찾기 위해 카드를 2장씩 뒤집습니다. 같은 동물을 찾으면 카드를 뒤집은
상태, 즉 앞면으로 두고, 다른 동물이면 다시 뒤집어 뒷면으로 바꾼다. 같은 동물 카드를 모두 찾으면
게임을 종료하고 총 몇 번 틀렸는지 실패 횟수를 알려준다.*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//카드 초기화 = 전역선언 20장
int array_Animal[4][5];
//앞면 뒷면 확인 배열
int check_Animal[4][5];
//동물 이름 배열
char* str_Animal[10];


//배열 초기화 용도
void InitAnimalArray(); //카드 지도 배열 초기화
//동물이름저장을 위한
void InitAnimalName();
//카드 섞기
void ShuffleAnimal();
//카드가 뒤집혔는지 아닌지
void printQuestion();
void printAnimals();

//카드지도에서 빈공간 해당위치 반환
int RGetEmptyPosition();
//게임 종료확인
int RFoundAllAnimals();

int conv_pos_x(int x);
int conv_pos_y(int y);


int main(void)
{
	srand(time(NULL)); //난수 초기화

	// 함수 호출
	InitAnimalArray();
	InitAnimalName();
	ShuffleAnimal();

	int failCount = 0;  //실패횟수

	while (1)
	{
		int select1 = 0; //첫번째 카드 번호 저장
		int select2 = 0; //두번째 선택한 카드 번호 저장
		printAnimals();
		printQuestion();

		printf("\n뒤집을 카드 2장을 고르시오.(예 : 12, 4) -> ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			continue;  // 반복문을 시작점으로 돌림
		}

		//입력받은 카드 번호를 x, y좌표로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (check_Animal[firstSelect_x][firstSelect_y] == 0
			&& check_Animal[secondSelect_x][secondSelect_y] == 0
			&& (array_Animal[firstSelect_x][firstSelect_y] == array_Animal[secondSelect_x][secondSelect_y])) {
			//두 카드가 같은 동물이고 뒷면인 경우
			printf("\n\n빙고! %s 발견\n\n", str_Animal[array_Animal[firstSelect_x][firstSelect_y]]);
			check_Animal[firstSelect_x][firstSelect_y] = 1;
			check_Animal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n땡! 서로 다른 동물 카드거나 이미 뒤집힌 카드입니다.\n");
			printf("%d : %s\n", select1, str_Animal[array_Animal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, str_Animal[array_Animal[secondSelect_x][secondSelect_y]]);

			printf("\n");
			failCount++;
		}

		if (RFoundAllAnimals() == 1)
		{
			printf("\n\n 축하합니다!. 모든 동물을 찾았습니다 \n");
			printf("총 %d번 실패했습니다.!", failCount);
			break;
		}
	}
	return 0;
}

////////////////////////////////////////////////////////////////////

void InitAnimalArray() // --- 카드 지도 배열 초기화 함수 정의
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			array_Animal[i][j] = -1; // 카드 뒷면 설정
		}
	}
}

void InitAnimalName() // -- 동물 이름 배열 초기화
{
	str_Animal[0] = "원숭이";  // 저장된 메모리의 시작주소
	str_Animal[1] = "하마";
	str_Animal[2] = "강아지";
	str_Animal[3] = "고양이";
	str_Animal[4] = "돼지";
	str_Animal[5] = "코끼리";
	str_Animal[6] = "기린";
	str_Animal[7] = "낙타";
	str_Animal[8] = "타조";
	str_Animal[9] = "호랑이";
}

void ShuffleAnimal()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = RGetEmptyPosition(); //카드 지도에서 빈공간 찾기 함수 호출
			int x = conv_pos_x(pos); //카드 번호를 x좌표로 변환하는 함수 호출
			int y = conv_pos_y(pos); //카드 번호를 y좌표로 변환하는 함수 호출
			array_Animal[x][y] = i; //카드 배열에 동물 번호 저장
		}
	}
}

void printQuestion()
{
	printf("\n============ 문제 ==============\n");
	int seq = 0; //카드 번호를 담을 변수

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (check_Animal[i][j] != 0)
			{
				printf("%8s", str_Animal[array_Animal[i][j]]);
			}
			else
			{
				printf("%8d", seq);
			}
			seq++; //다음 카드로 넘어가기
		}
		printf("\n");
	}
}

void printAnimals()
{
	printf("\n===== 동물 위치를 보여 줍니다. ========\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", str_Animal[array_Animal[i][j]]); //카드 지도 좌표로 동물 이름 출력
		}
		printf("\n");
	}
	printf("\n========================================================\n");
}
//////////////////////////////////////////////////////

int RGetEmptyPosition()
{//-- arrayAnimal 배열에 빈공간이 없을 때까지 작동
	while (1)
	{
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);
		if (array_Animal[x][y] == -1) { // -- 찾은 공간이 비었으면 카드 번호 반환
			return randPos;
		}
	}
	return 0; // 빈 공간이 하나도 없으면 0 반환
}

int RFoundAllAnimals()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (check_Animal[i][j] == 0)
			{
				return 0; // 뒤집지 않은 카드가 있다.
			}
		}
	}
	return 1; //모든 카드 뒤집음
}

//////////////////
// x, y 좌표 함수정의
////////////
int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5;
}
