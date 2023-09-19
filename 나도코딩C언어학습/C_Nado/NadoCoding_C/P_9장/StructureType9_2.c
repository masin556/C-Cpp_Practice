/*구조체란*/
/* 자료형의 변수가 많을 때는 배열을 사용했지만. 이번에 변수의 자료형도 다양하다.
정보를 하나로 관리하는 방법으로 구조체(structure)를 사용한다.
ex )
struct 구조체명 {
	자료형1 변수명1;
	자료형2 변수명2;
	자료형3 변수명3;
	...
};
형식으로 쓰인다.

*/
#include <stdio.h>


struct GameInfo {

	char* name; //구조체 멤버1
	int year;
	int price;
	char* company;

};

int main(void)
{
	//구조체 변수
	struct GameInfo gameInfo1;

	//구조체 멤버 저장
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	//구조체 멤버 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.name);
	printf("발매 연도 : %d\n", gameInfo1.year);
	printf("게임 가격 : %d\n", gameInfo1.price);
	printf("제작 회사 : %s\n", gameInfo1.company);


	struct GameInfo gameInfo2 = { "너도게임", 2022, 100, "너도회사" };

	//구조체 멤버 출력
	printf("\n-- 또 다른 게임 출시 정보 --\n");
	printf("게임이름 : %s\n", gameInfo2.name);
	printf("게임이름 : %d\n", gameInfo2.year);
	printf("게임이름 : %d\n", gameInfo2.price);
	printf("게임이름 : %s\n", gameInfo2.company);


	printf("\n");
	//구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도게임", 2022, 50, "나도회사"}, // gameArray[0].name / year 등으로 출력
		{"너도게임", 2022, 100, "너도회사"} // gameArray[1]
	};
	//구조체 배열 출력
	printf("게임이름 : %s\n", gameArray[0].name);

#pragma region 구조체정의
	//char* name = "나도게임";
	//int year = 2023;
	//int price = 50;
	//char* company = "나도회사";

	//char* name2 = "너도게임";
	//int year2 = 2022;
	//int price2 = 100;
	//char* company2 = "너도회사";
#pragma endregion
	return 0;
}