/*����� Ű���
���� 6���� ����Ⱑ �� ������ ����ִ�. ���� ȭ�� ��ܿ��� ���� ǥ�ÿ� ���밡 �ִ�.
����� ���ѽð��� �ǹ� �ð��� ������ ���� ���밡 ä������ ������ ���� ���ݾ� �پ���.
���� �ϳ��� ������ �ð��� 20�� ������ 5���� �ְ�, ������
�ö� ���� ���� �پ��� �ӵ��� ��������. ���� �� ���� �ϱ� ���� ���׿� ��������
���� �༭ ����⸦ ����� �Ѵ�. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int LEVEL = 0;
int ARRAYFISH[6];
//���� ���ֱ�
int* CURSOR;

//���� �ʱ�ȭ �Լ�
void initData();
//���� ������ ���
void printFishes();
//������ ���Ǿ�
void decreaseWater(long elapsedTime);
//����� Ȯ��
int checkFishAlive();


int main(void)
{
	long startTime = 0;
	long totalElapsedTime = 0; //------�� ��� �ð�
	long prevElapsedTime = 0;  //------������ ���� �� �ð�(���� �� �ð�����)
	int num;  //���� �� ���� ��ȣ

	initData(); // ���� �ʱ�ȭ �Լ� ȣ��
	startTime = clock(); //���α׷� ���� ���� ������� �帥 �ð��� ���� �ð���������

	CURSOR = ARRAYFISH; // -- ������ ������ ���� �迭�� ���� �ּ� �ֱ�

	while (1)
	{
		printFishes(); //���� �� ���� ��� �Լ� ȣ��
		printf("�� �� ���׿� ���� �ٱ��?(1~6) ");
		scanf_s("%d", &num);
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��ƽ��ϴ�.\n");
			continue;
		}

		// �� ����ð�, �ʴ�����ǥ��
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld��\n", totalElapsedTime); // �� ��� �ð� ���

		prevElapsedTime = totalElapsedTime - prevElapsedTime; //������ �� �� �ð� ���ķ� �帥 �ð�
		printf("�ֱ� ��� �ð� : %ld��\n", prevElapsedTime);  // �ֱ� ��� �ð� ���
		decreaseWater(prevElapsedTime); // ���� ���� ����(����)��Ű�� �Լ� ȣ��

		//����� �Է��� ��ȣ�� ���׿� ���ֱ�
		if (CURSOR[num - 1] <= 0) { // -- ���� ������ 0����
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�.\n", num);
		}
		else if (CURSOR[num - 1] + 1 <= 100) { // -- ���� ������ 100����
			printf("%d�� ���׿� ���� �ݴϴ�. \n\n", num);
			//���� �ָ� �� ����  + 1(CURSOR[num - 1] = CURSOR[num - 1] + 1
			CURSOR[num - 1] += 1;
		}


		//���� �ø��� ����
		if (totalElapsedTime / 20 > LEVEL - 1) { //-- ������ Ȯ��(20�ʸ��� �ѹ��� ����)
			LEVEL++;
			printf("*** �����մϴ�. %d�������� %d������ �ö����ϴ�.! ***\n\n", LEVEL - 1, LEVEL);
			if (LEVEL == 5)
			{
				printf("\n\n�����մϴ�.! �ְ� ������ �޼��߽��ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}

		// ����� Ȯ��
		if (checkFishAlive() == 0) { //---�Լ��� ȣ���� ��� ����Ⱑ �׾����� Ȯ��
			printf("��� ����Ⱑ �׾����ϴ�. �Ф�\n\n");
			exit(0);
		}
		else
		{
			printf("����Ⱑ �������� ��� �־��!\n\n");
		}

		//totalElapsedTime���� ���� �����ؾ��Ѵ�. ���� �ݺ��� Ȱ���ϱ� ����
		prevElapsedTime = totalElapsedTime;
	}
	return 0;
}

void initData()
{
	//�������� �ʱ�ȭ
	LEVEL = 1;
	for (int i = 0; i < 6; i++)
	{
		ARRAYFISH[i] = 100; //���� �� ���� �ʱ�ȭ(�� ���� ���� 0~ 100)
	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("   %3d ", ARRAYFISH[i]); //���� �����ڷ� ��� ��� ����
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		ARRAYFISH[i] -= (LEVEL * 3 * (int)elapsedTime);
		if (ARRAYFISH[i] < 0) { // --- �� ���̰� 0�̸��̸� �� ���̴� 0���� ����
			ARRAYFISH[i] = 0;
		}
	}
}

int checkFishAlive() //----- ��� ����Ⱑ �׾����� Ȯ���ϴ� �Լ�
{
	for (int i = 0; i < 6; i++)
	{
		if (ARRAYFISH[i] > 0)
		{
			return 1;  // ��(true)
		}
	}
	return 0;
}