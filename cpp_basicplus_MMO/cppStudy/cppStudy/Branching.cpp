#include <iostream>
using namespace std;

// �б⹮
// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ���� 
// ������ �����͸� �̿��ؼ� �����ΰ� �ϰ� �ʹٸ�.

int main()
{
#pragma region if else�� 
	//int hp = 100; //�� hp
	//int damage = 100; //�÷��̾� ������

	//hp -= damage;  //�ǰ�
	//bool isDead = (hp <= 0); // óġ ����

	// ���Ͱ� �׾��ٸ� ����ġ �߰�
	// ��������� CMP JMP

#pragma region if�� 1���
	//if (isDead)
	//	cout << "���͸� óġ�ߴ�" << endl;
	//else
	//{
	//	//TODO
	//	if (hp <= 20)
	//		cout << "���Ͱ� ��������" << endl;
	//	else
	//		cout << "���Ͱ� �ݰ��ߴ�" << endl;
	//}
	//if (isDead == false)
		//cout << "���Ͱ� �ݰ��ߴ�" << endl;
#pragma endregion
	/*if (isDead)
		cout << "���͸� óġ�ߴ�" << endl;
	else if(hp <= 20)
		cout << "���Ͱ� ��������" << endl;
	else
		cout << "���Ͱ� �ݰ��ߴ�" << endl;*/
#pragma endregion

//���� ���� ��?
	const int ROCK = 0;
	const int PAPER = 1;
	const int  SCISSORS = 2;

	int input = ROCK;

	if (input == ROCK)
		cout << "����" << endl;
	else if (input == PAPER)
		cout << "��" << endl;
	else if (input == SCISSORS)
		cout << "����" << endl;
	else
		cout << "�峭 ġ��?" << endl;


	// ��� �迭�� ���� �� �ִ�. (����) 
	int input = ROCK;

	// switch-case ��
	switch (input)
	{
	case ROCK:
		cout << "����" << endl;
		break;
	case PAPER:
		cout << "��" << endl;
		break;
	case SCISSORS:
		cout << "����" << endl;
		break;
	default:
		cout << "�峭ġ��?" << endl;
		break;
	}
}