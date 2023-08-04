#include <iostream>
using namespace std;

// 분기문
// 데이터를 메모리에 할당하고 가공하고 방법에 대해 
// 가공한 데이터를 이용해서 무엇인가 하고 싶다면.

int main()
{
#pragma region if else문 
	//int hp = 100; //적 hp
	//int damage = 100; //플레이어 데미지

	//hp -= damage;  //피격
	//bool isDead = (hp <= 0); // 처치 판정

	// 몬스터가 죽었다면 경험치 추가
	// 어셈블리에서 CMP JMP

#pragma region if문 1방법
	//if (isDead)
	//	cout << "몬스터를 처치했다" << endl;
	//else
	//{
	//	//TODO
	//	if (hp <= 20)
	//		cout << "몬스터가 도망간다" << endl;
	//	else
	//		cout << "몬스터가 반격했다" << endl;
	//}
	//if (isDead == false)
		//cout << "몬스터가 반격했다" << endl;
#pragma endregion
	/*if (isDead)
		cout << "몬스터를 처치했다" << endl;
	else if(hp <= 20)
		cout << "몬스터가 도망간다" << endl;
	else
		cout << "몬스터가 반격했다" << endl;*/
#pragma endregion

//가위 바위 보?
	const int ROCK = 0;
	const int PAPER = 1;
	const int  SCISSORS = 2;

	int input = ROCK;

	if (input == ROCK)
		cout << "바위" << endl;
	else if (input == PAPER)
		cout << "보" << endl;
	else if (input == SCISSORS)
		cout << "가위" << endl;
	else
		cout << "장난 치냐?" << endl;


	// 상수 계열만 넣을 수 있다. (정수) 
	int input = ROCK;

	// switch-case 문
	switch (input)
	{
	case ROCK:
		cout << "바위" << endl;
		break;
	case PAPER:
		cout << "보" << endl;
		break;
	case SCISSORS:
		cout << "가위" << endl;
		break;
	default:
		cout << "장난치냐?" << endl;
		break;
	}
}