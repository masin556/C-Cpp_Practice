#include <stdio.h>
/* �ش� ���ǿ� ���� if �� else�� �б��ؼ� �� �ش� ���ǿ� �´� �� �߰�ȣ
���� �����Ų��.*/


int main(void)
{
#pragma region if . else
	//int age = 15;
	//if (age >= 20)
	//{
	//	printf("�����Դϴ�.\n");
	//}
	//else
	//{
	//	printf("û�ҳ� �Դϴ�.\n");
	//}
#pragma endregion


#pragma region if_elseif_else4.2.2
	//int age = 9;

	////�������� ����Ͽ� ���� ���� �����ϰ���
	//if (age >= 8 && age <= 13) // age�� 8���� ũ�ų� ����, 13���� �۰ų� ���ƾ� �Ѵ�.
	//{// �� ������ �����Ǿ��� ������ ���� �� ����.
	//	printf("�ʵ��л��Դϴ�.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("���л��Դϴ�. \n");
	//}
	//else if (age >= 17 && age <=19)
	//{
	//	printf("����л��Դϴ�. \n");
	//}
	//else
	//{
	//	printf("û�ҳ��� �ƴմϴ�.\n");
	//}
#pragma endregion

#pragma region AND 4.2.3
	int age = 0;
	int a, b, c, d;
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);

	/* AND�� �� ������ ��� �����ؾ��Ѵ�.*/
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (a == b && c == d)
	{
		printf("a�� b�� ���� c�� d�� �����ϴ�.\n");
	}
	else
	{
		printf(" ���� ���� �ٸ���.\n");
	}

#pragma endregion

#pragma region OR
	/* �� ���� �� �ϳ��� �´ٸ� ����*/
	if (a == b || c == d)
	{
		printf("a�� b�Ǵ� c�� d�� ���� ����.\n");
	}

#pragma endregion
	return 0;
}