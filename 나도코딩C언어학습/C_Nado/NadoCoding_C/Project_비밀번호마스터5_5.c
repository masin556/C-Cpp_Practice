/*��й�ȣ ������ ���� �����
1. ���� 2���� ���� ���� ������ ���α׷�
������ ������ ������ ������ '����' Ʋ���� '����'�� ����Ѵ�.
������ ���� ������ ���� ������ ��������� ������ ��� Ǭ �Ŀ��� ���� ������ �˷��ش�.
������ 5���� ���� */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	srand(time(NULL));

	//���� x * y = ?
	int count = 0; // ���� ����

	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		//printf("%d x %d = %d\n", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer); // ���Է�

		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.\n");
			exit(0); //
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
			printf("\n >> ������ %d �̴�.\n", num1 * num2);
		}
	}
	printf("\n\n ��й�ȣ %d���� ������ϴ�. \n", count);
	return 0;
}

int getRandomNumber(int level)
{
	//level 1 = 1~9 , level 5 = 1~45
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d��° ��й�ȣ #########\n", level); // �����ܰ� ���
	printf("\n\t%d x %d ? \n\n", num1, num2); //���� ���
	printf("####################################\n"); //����
	printf("\n��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է� >> "); //�����Է¾ȳ�
}

void success()
{
	printf("\n >> �����̿�!\n");
}

void fail()
{
	printf("\n >> �����߼�!\n");
}