/*�迭�� Ư�� ��� ���� �ٲٴ� ���α׷��� �����ͷ� ����� ������*/

#include <stdio.h>


void square(int* num);

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	square(&arr[0]);

	for (int i = 0; i < 10; i++) {
		printf("%d, ", arr[i]);
	}

	return 0;
}

void square(int* num)
{
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0) // ¦��
		{
			num[i] *= num[i];
		}
		else
		{
			continue;
		}
	}
}