/*typedef�� ����ü �����ϱ�*/

#include <stdio.h>

struct GameInfo {
	char* name; //����ü ���1
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //����ü ����
};

typedef struct GameInformation { //����ü �̸�
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INFO; //�̰����� ġȯ�� (����ü�� ����)

int main()
{

	int i = 1; // �Ϲ� ��������

	typedef struct GameInfo ��������; //����ü ����
	typedef int ����;
	typedef float �Ǽ�;

	���� �������� = 3; // int i = 3;
	printf("%d\n", ��������);

	�Ǽ� �Ǽ����� = 3.23f; // float f = 3.23f
	printf("%f\n", �Ǽ�����);

	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2022;

	//////////////////
	GAME_INFO game2;
	game2.year = 2022;
	game2.name = "�ѱ� ����2";
	//����ü ���
	printf("--- ���� ��� ���� -- \n");
	printf("���� �̸� : %s\n", game1.name);
	printf("���� ��� : %d\n", game1.year);
	printf("���� ���� : %s\n", game2.name);
	printf("���� ȸ�� : %d\n", game2.year);


	return 0;
}