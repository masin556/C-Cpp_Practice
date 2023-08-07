#include <iostream>
using namespace std;

struct Choice
{
	int value;
	string name;
};


int main()
{

	while (true) {
		Choice user, computer;
		user.name = "사용자";
		computer.name = "컴퓨터";

		cout << "가위(1), 바위(2), 보(3) 중 하나를 선택하세요! : ";
		cin >> user.value;

		srand(time(NULL));
		computer.value = 1 + (rand() % 3);

		int result = (user.value - computer.value + 3) % 3;
		if (result == 0)
		{
			cout << "무승부!" << endl;
		}
		else if (result == 1)
		{
			cout << user.name << "가 이겼습니다!" << endl;
		}
		else if (result == 2)
		{
			cout << computer.name << "가 이겼습니다!" << endl;
		}


		if(user.value == 4)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
	}

	return 0;
}

#pragma region 원본
//int main()
//{
//	srand(time(0)); // 시드
//
//	while (true)
//	{
//		int player = 0;
//		cout << "가위(1), 바위(2), 보(3) 을 골라주세요! > ";
//		cin >> player;
//
//
//		int value = 1 + (rand() % 3);
//		if (player == 1 && value == 1)
//		{
//			cout << "가위(님) vs 가위(컴퓨터)" << endl;
//			cout << "무승부!" << endl;
//		}
//		else if (player == 1 && value == 2)
//		{
//			cout << "가위(님) vs 바위(컴퓨터)" << endl;
//			cout << "컴퓨터 승!" << endl;
//
//		}
//		else if (player == 1 && value == 3)
//		{
//			cout << "가위(님) vs 보(컴퓨터)" << endl;
//			cout << "님 승!" << endl;
//		}
//
//	}
//
//	return 0;
//}
#pragma endregion