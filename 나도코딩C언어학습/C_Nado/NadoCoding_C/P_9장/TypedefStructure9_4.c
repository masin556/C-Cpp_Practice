/*typedef로 구조체 선언하기*/

#include <stdio.h>

struct GameInfo {
	char* name; //구조체 멤버1
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //구조체 정의
};

typedef struct GameInformation { //구조체 이름
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INFO; //이곳으로 치환됨 (구조체의 별명)

int main()
{

	int i = 1; // 일반 변수선언

	typedef struct GameInfo 게임정보; //구조체 별명
	typedef int 정수;
	typedef float 실수;

	정수 정수변수 = 3; // int i = 3;
	printf("%d\n", 정수변수);

	실수 실수변수 = 3.23f; // float f = 3.23f
	printf("%f\n", 실수변수);

	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2022;

	//////////////////
	GAME_INFO game2;
	game2.year = 2022;
	game2.name = "한글 게임2";
	//구조체 멤버
	printf("--- 게임 출시 정보 -- \n");
	printf("게임 이름 : %s\n", game1.name);
	printf("게임 출시 : %d\n", game1.year);
	printf("게임 가격 : %s\n", game2.name);
	printf("게임 회사 : %d\n", game2.year);


	return 0;
}