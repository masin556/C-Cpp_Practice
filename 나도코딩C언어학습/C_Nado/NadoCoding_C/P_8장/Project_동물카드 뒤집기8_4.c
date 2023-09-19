/*����ī�� ������
���� ī�� ������� ī�带 ������ ���� ������ ã�� �����̴�.
ī�� �ո鿡�� ���� �ٸ� ������ �ְ�, �޸鿡�� ��� ������ �׸��� �ִ�.
�� 10���̰� 1���� ī�尡 2�徿, �� 20���� �ִ�. ó������ ��� �޸��� ���̰�
����ڴ� ���� �������� ã�� ���� ī�带 2�徿 �������ϴ�. ���� ������ ã���� ī�带 ������
����, �� �ո����� �ΰ�, �ٸ� �����̸� �ٽ� ������ �޸����� �ٲ۴�. ���� ���� ī�带 ��� ã����
������ �����ϰ� �� �� �� Ʋ�ȴ��� ���� Ƚ���� �˷��ش�.*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//ī�� �ʱ�ȭ = �������� 20��
int array_Animal[4][5];
//�ո� �޸� Ȯ�� �迭
int check_Animal[4][5];
//���� �̸� �迭
char* str_Animal[10];


//�迭 �ʱ�ȭ �뵵
void InitAnimalArray(); //ī�� ���� �迭 �ʱ�ȭ
//�����̸������� ����
void InitAnimalName();
//ī�� ����
void ShuffleAnimal();
//ī�尡 ���������� �ƴ���
void printQuestion();
void printAnimals();

//ī���������� ����� �ش���ġ ��ȯ
int RGetEmptyPosition();
//���� ����Ȯ��
int RFoundAllAnimals();

int conv_pos_x(int x);
int conv_pos_y(int y);


int main(void)
{
	srand(time(NULL)); //���� �ʱ�ȭ

	// �Լ� ȣ��
	InitAnimalArray();
	InitAnimalName();
	ShuffleAnimal();

	int failCount = 0;  //����Ƚ��

	while (1)
	{
		int select1 = 0; //ù��° ī�� ��ȣ ����
		int select2 = 0; //�ι�° ������ ī�� ��ȣ ����
		printAnimals();
		printQuestion();

		printf("\n������ ī�� 2���� ���ÿ�.(�� : 12, 4) -> ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			continue;  // �ݺ����� ���������� ����
		}

		//�Է¹��� ī�� ��ȣ�� x, y��ǥ�� ��ȯ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (check_Animal[firstSelect_x][firstSelect_y] == 0
			&& check_Animal[secondSelect_x][secondSelect_y] == 0
			&& (array_Animal[firstSelect_x][firstSelect_y] == array_Animal[secondSelect_x][secondSelect_y])) {
			//�� ī�尡 ���� �����̰� �޸��� ���
			printf("\n\n����! %s �߰�\n\n", str_Animal[array_Animal[firstSelect_x][firstSelect_y]]);
			check_Animal[firstSelect_x][firstSelect_y] = 1;
			check_Animal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n��! ���� �ٸ� ���� ī��ų� �̹� ������ ī���Դϴ�.\n");
			printf("%d : %s\n", select1, str_Animal[array_Animal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, str_Animal[array_Animal[secondSelect_x][secondSelect_y]]);

			printf("\n");
			failCount++;
		}

		if (RFoundAllAnimals() == 1)
		{
			printf("\n\n �����մϴ�!. ��� ������ ã�ҽ��ϴ� \n");
			printf("�� %d�� �����߽��ϴ�.!", failCount);
			break;
		}
	}
	return 0;
}

////////////////////////////////////////////////////////////////////

void InitAnimalArray() // --- ī�� ���� �迭 �ʱ�ȭ �Լ� ����
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			array_Animal[i][j] = -1; // ī�� �޸� ����
		}
	}
}

void InitAnimalName() // -- ���� �̸� �迭 �ʱ�ȭ
{
	str_Animal[0] = "������";  // ����� �޸��� �����ּ�
	str_Animal[1] = "�ϸ�";
	str_Animal[2] = "������";
	str_Animal[3] = "�����";
	str_Animal[4] = "����";
	str_Animal[5] = "�ڳ���";
	str_Animal[6] = "�⸰";
	str_Animal[7] = "��Ÿ";
	str_Animal[8] = "Ÿ��";
	str_Animal[9] = "ȣ����";
}

void ShuffleAnimal()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = RGetEmptyPosition(); //ī�� �������� ����� ã�� �Լ� ȣ��
			int x = conv_pos_x(pos); //ī�� ��ȣ�� x��ǥ�� ��ȯ�ϴ� �Լ� ȣ��
			int y = conv_pos_y(pos); //ī�� ��ȣ�� y��ǥ�� ��ȯ�ϴ� �Լ� ȣ��
			array_Animal[x][y] = i; //ī�� �迭�� ���� ��ȣ ����
		}
	}
}

void printQuestion()
{
	printf("\n============ ���� ==============\n");
	int seq = 0; //ī�� ��ȣ�� ���� ����

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (check_Animal[i][j] != 0)
			{
				printf("%8s", str_Animal[array_Animal[i][j]]);
			}
			else
			{
				printf("%8d", seq);
			}
			seq++; //���� ī��� �Ѿ��
		}
		printf("\n");
	}
}

void printAnimals()
{
	printf("\n===== ���� ��ġ�� ���� �ݴϴ�. ========\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", str_Animal[array_Animal[i][j]]); //ī�� ���� ��ǥ�� ���� �̸� ���
		}
		printf("\n");
	}
	printf("\n========================================================\n");
}
//////////////////////////////////////////////////////

int RGetEmptyPosition()
{//-- arrayAnimal �迭�� ������� ���� ������ �۵�
	while (1)
	{
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);
		if (array_Animal[x][y] == -1) { // -- ã�� ������ ������� ī�� ��ȣ ��ȯ
			return randPos;
		}
	}
	return 0; // �� ������ �ϳ��� ������ 0 ��ȯ
}

int RFoundAllAnimals()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (check_Animal[i][j] == 0)
			{
				return 0; // ������ ���� ī�尡 �ִ�.
			}
		}
	}
	return 1; //��� ī�� ������
}

//////////////////
// x, y ��ǥ �Լ�����
////////////
int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5;
}
