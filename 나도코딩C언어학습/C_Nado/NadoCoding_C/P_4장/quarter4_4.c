/*switch �� ����� ���������ϱ�
rand()�Լ� ����ϱ�
rand() : time.h \ stdlib.h ���� �߰�*/
#include <stdio.h>
//���������� ���� ���̺귯��
#include <time.h> // �ð� ���� �Լ���
#include <stdlib.h> // ���� ������ ���ڿ� ��ȯ���� �����ϴ� �Լ���

int main()
{
	// rand �Լ��� ���� : rand() % � ��;
	// � ���� ���� �̰� ���� ������ ������ �����ϴ� ���� �� 3�̸� 0~2 ���� ����
	// �׻� ���� ������ �ʱ�ȭ �ʿ� srand(time(NULL));
	// unsigned ������ ���� �ʱ�ȭ = > srand((unsigned int) time(NULL));

#pragma region ����0_9����10���̱�

	//printf("���� �ʱ�ȭ ����...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % 10);
	//}// �׻� �Ȱ��� ���� ���´�(�ʱ�ȭX)
	//printf("�Ȱ����� : 1 7 4 0 9 4 8 8 2 4");


	//srand(time(NULL));
	//printf("\n\n���� �ʱ�ȭ ����...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % 10);
	//}

#pragma endregion

#pragma region ���� ���� ��
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�� �� �ƴ�\n");
	}


#pragma endregion
	return 0;
}