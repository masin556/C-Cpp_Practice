/*�ڶ󳪶� �Ӹ�ī�� 
�ິ 4�� �� � �� ��¥ �߸������� ã�� ����. 
�� 3ȸ �׽�Ʈ�ϴµ� �߸����� �� ���� �������� 2�� �Ǵ� 3�� ������ �Ӹ��� �ξ��� ��
�Ӹ�ī���� ������ �� ������ Ȯ���Ѵ�. ����ڴ� �׽�Ʈ�� 3ȸ �����ϰ� ���� ��¥ �߸����� 
�� ������ �Է��Ѵ�. ������ ���� �޽����� Ʋ���� ���� �޽����� �Բ� ���� ��ȣ�� ����ϴ�*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int treatment = rand() % 4;

	printf("===�ڶ󳪶� �Ӹ�ī��! ==== Your Game is Start!\n");
	
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };

		do {
			cntShowBottle = rand() % 2 + 2;  // ������ �ິ ���� 0~1 + 2 -> 2 ~ 3
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle; // �̹� ȸ���� �ິ ������ ����

		printf(" > %d��° �׽�Ʈ\n", i);

		int isInclude = 0;
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1; //���� 0 -> 1;

				if (randBottle == treatment) {
					isInclude = 1;  //��¥ �߸����� ���Ե�
				}
			}
			else {   //�̹� ���õ� �ິ�̸� �ߺ��̹Ƿ� �ٽ� ����
				j--;
			}
		}

		//����ڿ��� �׽�Ʈ ��� ǥ�� 
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) //���õ� �ິ���� Ȯ��
			{
				printf("%d ", k + 1); // �ε��� + 1, %d �ڿ� ��ĭ �ϳ� �ֱ�
			}
		}
		printf("�� ������ �Ӹ��� �ٸ��ϴ�\n\n"); //�ȳ� ����
		if (isInclude == 1) {  // --- �ິ ���տ� �߸����� ���Ե� ���
			printf(" >> ����! �Ӹ�ī���� �����!\n");
		}
		else {
			printf(" >> ����! �Ӹ�ī���� ���� �ʾҾ��, �Ф� \n");
		}
		printf("\n ����Ϸ��� Enter�� ��������! \n");
		(void) getchar();  //Enter�� �Է¹޾� ���� �׽�Ʈ ȸ���� �Ѿ��

	}

	//����� �Է¹ޱ�
	printf("\n\n�߸����� �� ���ϱ��? ");
	int answer;  //����� �Է� ���� ���� ��������
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> �����Դϴ�!\n");
	}
	else {
		printf("\n >> ��! Ʋ�Ⱦ��. ������ %d �Դϴ�.\n", treatment + 1);
	}

	return 0;
}