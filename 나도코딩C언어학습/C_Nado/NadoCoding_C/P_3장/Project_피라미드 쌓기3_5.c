/*Project Pyramid�� �׾ƶ�!*/
#include <stdio.h>
int main(void)
{
	int floor = 0; //��������
	printf("�p ���� �װڽ��ϱ�? : "); //����
	scanf_s("%d", &floor); // �� �Է¹ޱ�

	for (int i = 0; i < floor; i++) // �� ���� ���̴� �� ���� ��Ÿ��
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}