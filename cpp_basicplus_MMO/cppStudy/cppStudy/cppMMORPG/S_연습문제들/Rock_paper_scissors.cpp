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
		user.name = "�����";
		computer.name = "��ǻ��";

		cout << "����(1), ����(2), ��(3) �� �ϳ��� �����ϼ���! : ";
		cin >> user.value;

		srand(time(NULL));
		computer.value = 1 + (rand() % 3);

		int result = (user.value - computer.value + 3) % 3;
		if (result == 0)
		{
			cout << "���º�!" << endl;
		}
		else if (result == 1)
		{
			cout << user.name << "�� �̰���ϴ�!" << endl;
		}
		else if (result == 2)
		{
			cout << computer.name << "�� �̰���ϴ�!" << endl;
		}


		if(user.value == 4)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
	}

	return 0;
}

#pragma region ����
//int main()
//{
//	srand(time(0)); // �õ�
//
//	while (true)
//	{
//		int player = 0;
//		cout << "����(1), ����(2), ��(3) �� ����ּ���! > ";
//		cin >> player;
//
//
//		int value = 1 + (rand() % 3);
//		if (player == 1 && value == 1)
//		{
//			cout << "����(��) vs ����(��ǻ��)" << endl;
//			cout << "���º�!" << endl;
//		}
//		else if (player == 1 && value == 2)
//		{
//			cout << "����(��) vs ����(��ǻ��)" << endl;
//			cout << "��ǻ�� ��!" << endl;
//
//		}
//		else if (player == 1 && value == 3)
//		{
//			cout << "����(��) vs ��(��ǻ��)" << endl;
//			cout << "�� ��!" << endl;
//		}
//
//	}
//
//	return 0;
//}
#pragma endregion