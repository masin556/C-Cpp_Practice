/*�� �� ���簡 �Ǿ��!*/
/*ū ���ڿ��� ����̸� �̾Ƽ� ���� ���ڿ� �ְ�, ���� ���ڿ� ���� �ٸ� ����� 5������ 
���̸� ������. ū ���ڸ� Ŭ���� ������ � ����̰� ������ �𸣰� ���� ����̰� ������ �ٸ� ����̰�
���� ������ ��� �̾ƾ� �Ѵ�.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//����� ����
typedef struct
{
	char* name; //�̸�
	char* character; //Ư¡
	int age; //����
	int level; //���� ���� 1~5 ���ڰ� Ŭ���� �����
}CAT; //����


//����ü �迭���� 
CAT cats[5];
// ����̸� ��������
int collection[5] = { 0, 0, 0, 0, 0 };

//����ü�� ���� ���
void init_Cats();
//���� ������� ������ ���
void Print_Cat(int selected);

//5������ �� ��Ҵ��� Ȯ�� 
int RCheck_Collection();

int main(void)
{
	srand(time(NULL));
	init_Cats();


	while (1)
	{
		printf("�ϱٵϱ�! ��� ����̰� ���簡 �ɱ�?!\nEnter�� ���� Ȯ���ϼ���!"); //-�ȳ�����
		getchar(); //Enter�Է¹ޱ�
		int selected = rand() % 5; // ����� �̱� 0 ~ 5;
		
		Print_Cat(selected); //���� ����� ����;

		collection[selected] = 1;
		int collectAll = RCheck_Collection();

		//����̸� �� ������ ���� �ݺ��� Ż��
		if (collectAll == 1) {
			break;
		}
	}
	return 0;
}

void init_Cats() //����� ���� �ʱ�ȭ �Լ� ����
{
	//typedef struct�� CAT������ ���� ���� cats �迭�� CAT�� ����ü�� ������ ���� �ִ�.
	//0��° �ε����� �迭�� �� ���� �ʱ�ȭ
	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "�¼���";
	cats[0].level = 1;

	//1��°
	cats[1].name = "�Ϳ��";
	cats[1].age = 3;
	cats[1].character = "��ĥ��";
	cats[1].level = 2;

	//2��°
	cats[2].name = "������";
	cats[2].age = 7;
	cats[2].character = "���� ����";
	cats[2].level = 3;

	//3����
	cats[3].name = "�����";
	cats[3].age = 2;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	//4���� -- 5���迭��
	cats[4].name = "�ų���";
	cats[4].age = 1;
	cats[4].character = "�� �����";
	cats[4].level = 5;
}


void Print_Cat(int selected)
{
	printf("\n\n== ����� ���� ������� ���簡 �ƾ��! ===\n\n");

	printf(" �̸� : %s\n", cats[selected].name);
	printf(" ���� : %d\n", cats[selected].age);
	printf(" Ư¡ : %s\n", cats[selected].character);
	printf(" ���� : ");
	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "��");
	}
	printf("\n\n");
}

int RCheck_Collection() 
{
	int collectAll = 1;
	//������ ����� ����� ����ϰ� 5���� �� ��Ҵ��� Ȯ��
	printf("\n\n==== ������ ����� ����̿��� ====\n\n");

	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0)
		{
			printf("%10s","(�� ����!)");
			collectAll = 0;  //����̸� �� ������ ���� ����
		}
		else
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n=========================================\n\n");
	if (collectAll) {
		printf("\n\n�����մϴ�! ����� 5������ ��� ��Ҿ��! ������ Ű���ּ���.\n\n");
	}
	return collectAll;
}