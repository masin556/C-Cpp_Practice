/* ������ ���� ���ڸ� ������ Ƚ�� �ȿ� ������ �ϴ� ����
��ǻ�Ͱ� ���� (���� ����)
���� ���� 1~100 ������ ������ ���ڴ� ���� num���� ����
��ǻ�� ���� ��� -> �� ���� ����� ��, ����ڰ� �Է��� ���� ������ ���� answer�� ����
���� Ƚ���� 5ȸ ���� chance
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int num = rand() % 100 + 1; //computer

	int answer = 0; //user ���庯��

	int chance = 5; //���� ��ȸ

	while (chance > 0)
	{
		printf("���ڸ� �Է����ּ��� ��ȸ�� 5���Դϴ�. : \n");
		scanf_s("%d", &answer);
		if (answer < num)
		{
			printf("UP!\n");
			chance--;
		}
		else if (answer > num)
		{
			printf("DOWN!\n");
			chance--;
		}
		else if (answer == num)
		{
			printf("�����Դϴ�!\n");
			chance--;
			break;
		}
		else
		{
			printf("���� ���Ͻô°���?\n");
			chance--;
		}

	}

	if (chance > 0)
	{
		printf("\n\n���� ���Ͻô±���?!\n");
	}
	else
	{
		printf("\n\n���ϳ�...? ��ǻ�ʹ� %d �����Ͽ����ϴ�.\n", num);
	}
	return 0;
}