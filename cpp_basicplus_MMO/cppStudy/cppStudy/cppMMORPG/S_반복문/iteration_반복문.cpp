#include <iostream>
using namespace std;

// �ݺ���
// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ����
// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ� �ʹٸ�.

int main()
{
	// while ~ ����
	// if-else
	// �ѹ��� �����ϴ°� �ƴ϶�, Ư�� ���Ǳ��� ��� �ݺ��ؾ� �ϴ� ��Ȳ
	// ex) ������ ������ ���� ���� ��� ���� - �ǽð�
	// ex) �������� ������ �� ����~ ��� �̵��϶�. 


	//break , continue;
	// for while���� �� break�� ���ȴ�.

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


#pragma region for��
	//for (int count = 0; count < 5; count++)
	//{
	//	cout << "Hello World!" << endl;
	//}

#pragma endregion


#pragma region ������ �帧 ���� break continue

	/*int round = 1;
	int hp = 100;
	int damage = 27;


	//���� ����  : �������� 
	while (true) //�ȿ��� ������ �Ǻ��ؼ� ���������� �ؾ��Ѵ�. 
	{
		hp -= damage;
		if (hp < 0)
			hp = 0; //���� ü���� 0���� ����


		//�ý��� �޼��� 
		cout << "Round " << round << " ���� ü�� " << hp << endl;


		if (hp == 0)
		{
			cout << "���� óġ!" << endl;
			break;
 		}

		if (round == 5)
		{
			cout << "���� ���� ����" << endl;
			break;
		}

		round++;
	}*/

#pragma endregion


#pragma region  1~ 10 ���� Ȧ���� ���

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);

		//������ �ʿ���� ������ continue�� �Ѿ�ִ� ����� �ִ�.
		if (isEven)
			continue;

		cout << count << endl;
		
		//���ϴ� ���ǽ�
		//if (isEven == false)
			//cout << count << endl;
	}

#pragma endregion 


}