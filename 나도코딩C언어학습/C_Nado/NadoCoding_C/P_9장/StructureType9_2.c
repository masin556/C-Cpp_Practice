/*����ü��*/
/* �ڷ����� ������ ���� ���� �迭�� ���������. �̹��� ������ �ڷ����� �پ��ϴ�.
������ �ϳ��� �����ϴ� ������� ����ü(structure)�� ����Ѵ�.
ex )
struct ����ü�� {
	�ڷ���1 ������1;
	�ڷ���2 ������2;
	�ڷ���3 ������3;
	...
};
�������� ���δ�.

*/
#include <stdio.h>


struct GameInfo {

	char* name; //����ü ���1
	int year;
	int price;
	char* company;

};

int main(void)
{
	//����ü ����
	struct GameInfo gameInfo1;

	//����ü ��� ����
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	//����ü ��� ���
	printf("-- ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.name);
	printf("�߸� ���� : %d\n", gameInfo1.year);
	printf("���� ���� : %d\n", gameInfo1.price);
	printf("���� ȸ�� : %s\n", gameInfo1.company);


	struct GameInfo gameInfo2 = { "�ʵ�����", 2022, 100, "�ʵ�ȸ��" };

	//����ü ��� ���
	printf("\n-- �� �ٸ� ���� ��� ���� --\n");
	printf("�����̸� : %s\n", gameInfo2.name);
	printf("�����̸� : %d\n", gameInfo2.year);
	printf("�����̸� : %d\n", gameInfo2.price);
	printf("�����̸� : %s\n", gameInfo2.company);


	printf("\n");
	//����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������", 2022, 50, "����ȸ��"}, // gameArray[0].name / year ������ ���
		{"�ʵ�����", 2022, 100, "�ʵ�ȸ��"} // gameArray[1]
	};
	//����ü �迭 ���
	printf("�����̸� : %s\n", gameArray[0].name);

#pragma region ����ü����
	//char* name = "��������";
	//int year = 2023;
	//int price = 50;
	//char* company = "����ȸ��";

	//char* name2 = "�ʵ�����";
	//int year2 = 2022;
	//int price2 = 100;
	//char* company2 = "�ʵ�ȸ��";
#pragma endregion
	return 0;
}