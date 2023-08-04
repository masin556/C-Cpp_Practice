#include <iostream>
using namespace std;

// 반복문
// 데이터를 메모리에 할당하고 가공하고 방법에 대해
// 가공한 데이터를 이용해서 무엇인가를 하고 싶다면.

int main()
{
	// while ~ 동안
	// if-else
	// 한번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
	// ex) 유저가 게임을 끌때 까지 계속 실행 - 실시간
	// ex) 목적지에 도달할 때 까지~ 계속 이동하라. 


	//break , continue;
	// for while에서 도 break가 사용된다.

#pragma region do-While 
	//int count = 0;

	//while (count < 5)
	//{
	//	cout << "Hello World!" << endl;
	//	count++;
	//}

	//do
	//{
	//	cout << "Hello World!" << endl;
	//	count++;
	//} while (count < 5);
#pragma endregion


#pragma region for문
	//for (int count = 0; count < 5; count++)
	//{
	//	cout << "Hello World!" << endl;
	//}

#pragma endregion


#pragma region 루프내 흐름 제어 break continue

	/*int round = 1;
	int hp = 100;
	int damage = 27;


	//무한 루프  : 전투시작 
	while (true) //안에서 적절히 판별해서 빠져나오게 해야한다. 
	{
		hp -= damage;
		if (hp < 0)
			hp = 0; //음수 체력을 0으로 보정


		//시스템 메세지 
		cout << "Round " << round << " 몬스터 체력 " << hp << endl;


		if (hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			break;
 		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}

		round++;
	}*/

#pragma endregion


#pragma region  1~ 10 사이 홀수만 출력

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);

		//어차피 필요없는 조건은 continue로 넘어가주는 방법도 있다.
		if (isEven)
			continue;

		cout << count << endl;
		
		//원하는 조건식
		//if (isEven == false)
			//cout << count << endl;
	}

#pragma endregion 


}