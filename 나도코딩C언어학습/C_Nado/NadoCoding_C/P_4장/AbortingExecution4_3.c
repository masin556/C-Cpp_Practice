#include <stdio.h>

int main(void)
{
#pragma region break
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6) {
	//		printf("������ �л��� ���� ������\n");
	//		break; // ����� ������� �Ѵ�.
	//	}

	//	printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���\n", i);
	//}
#pragma endregion


#pragma region continue
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
		}
		printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���\n", i);
	}

#pragma endregion


	return 0;
}