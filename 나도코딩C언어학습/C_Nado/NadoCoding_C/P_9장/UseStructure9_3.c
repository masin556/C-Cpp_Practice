/*구조체 사용하기*/
//구조체 포인터 struct 구조체명 * 변수명;


#include <stdio.h>

struct GameInfo {
	char* name; //구조체 멤버1
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //구조체 정의

};


int main() 
{
	//구조체 변수 9.2
	struct GameInfo gameInfo1;

	//구조체 멤버 저장
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

#pragma region 구조체포인터(9.3.1)
	struct GameInfo* gamePtr; // 구조체 포인터 변수 선언
	gamePtr = &gameInfo1; //gamePtr은 구조체 변수 gameInfo1을 가리킨다. 해당 주소를 담고 있는 구조체 포인터 gamePtr
	
	printf("--- 미션맨의 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", (*gamePtr).name); // 방법1
	printf("게임 출시 : %d\n", (*gamePtr).year);
	printf("게임 가격 : %d\n", gamePtr->price);  // 방법2
	printf("게임 회사 : %s\n", gamePtr->company);

#pragma endregion
	struct GameInfo gameInfo2 = { "너도게임", 2022, 100, "너도회사" };
	gameInfo1.friendGame = &gameInfo2;
	printf("-- 다른 회사의 게임출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.friendGame->name);
	printf("게임 출시 : %d\n", gameInfo1.friendGame->year);
	printf("게임 가격 : %d\n", gameInfo1.friendGame->price);
	printf("게임 회사 : %s\n", gameInfo1.friendGame->company);
#pragma region 구조체안에구조체(9.3.2)



#pragma endregion
	return 0;
}


