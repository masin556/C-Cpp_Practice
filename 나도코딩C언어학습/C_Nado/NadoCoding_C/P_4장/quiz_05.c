/*ī�信 �ִ� Ű����ũ ���α׷��� �Ϻ� �������� �ùٸ���*/
#include <stdio.h>

enum Cafe
{
	bread = 1,
	coffee = 2,
	cake = 3,
};

int main()
{
	int choices[4] = { 0 }; // �� �޴� �׸��� �ֹ� ���� ���� �迭(�ε��� 1����)
	
	while (1)
	{
		printf("�޴��� �����ϼ���\n");
		printf("1 : bread, 2 : coffee, 3 : cake, 0 : �ֹ��Ϸ�\n");

		int num; //���� ��������
		scanf_s("%d", &num);


		if (num >= 1 && num <= 3) //��ȿ�޴�����
		{
			printf("�ֹ� ������ �Է��Ͻÿ� : \n");
			int quantity;
			scanf_s("%d", &quantity);

			if (quantity > 0)
			{
				choices[num] += quantity; //���� �޴��� ���������� 
			}
		}
		else if (num == 0)
		{
			break; //�ֹ� �Ϸ� ���ý� ���� ����
		}
		else
		{
			printf("��ȿ���� ���� �޴� ��ȣ�Դϴ�.\n");
		}
	}

	//��ǰ �ľ�
	printf("�ֹ��Ͻ� �޴��� : �� %d��, Ŀ�� %d��, �ɟ� %d��\n", choices[1], choices[2], choices[3]);


	if (choices[1] > 0)
	{
		printf("���� �����ð��� 5�� �̻� �ɸ� �� �ֽ��ϴ�.\n");
	}

	if (choices[2] > 0)
	{
		printf("���� �ȿ����� ��ȸ�� ���� ����� �� �����ϴ�\n");
	}

	if (choices[3] > 0)
	{
		printf("������ ���ֽ��ϴ�\n");
	}

	printf("�ֹ��� �Ϸ�ƽ��ϴ�\n");

	return 0;

}
