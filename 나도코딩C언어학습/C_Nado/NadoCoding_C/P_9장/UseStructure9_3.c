/*����ü ����ϱ�*/
//����ü ������ struct ����ü�� * ������;


#include <stdio.h>

struct GameInfo {
	char* name; //����ü ���1
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //����ü ����

};


int main() 
{
	//����ü ���� 9.2
	struct GameInfo gameInfo1;

	//����ü ��� ����
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

#pragma region ����ü������(9.3.1)
	struct GameInfo* gamePtr; // ����ü ������ ���� ����
	gamePtr = &gameInfo1; //gamePtr�� ����ü ���� gameInfo1�� ����Ų��. �ش� �ּҸ� ��� �ִ� ����ü ������ gamePtr
	
	printf("--- �̼Ǹ��� ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", (*gamePtr).name); // ���1
	printf("���� ��� : %d\n", (*gamePtr).year);
	printf("���� ���� : %d\n", gamePtr->price);  // ���2
	printf("���� ȸ�� : %s\n", gamePtr->company);

#pragma endregion
	struct GameInfo gameInfo2 = { "�ʵ�����", 2022, 100, "�ʵ�ȸ��" };
	gameInfo1.friendGame = &gameInfo2;
	printf("-- �ٸ� ȸ���� ������� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.friendGame->name);
	printf("���� ��� : %d\n", gameInfo1.friendGame->year);
	printf("���� ���� : %d\n", gameInfo1.friendGame->price);
	printf("���� ȸ�� : %s\n", gameInfo1.friendGame->company);
#pragma region ����ü�ȿ�����ü(9.3.2)



#pragma endregion
	return 0;
}


