/*�迭 �ʱ�ȭ*/

// �迭 �ѹ��� �ʱ�ȭ : �ڷ��� �迭��[�迭ũ��] = {��, ��2, .... };

#include <stdio.h>

int main()
{
#pragma region �迭 �ʱ�ȭ
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}

#pragma endregion

	printf("\n\n�Ϻΰ� �ʱ�ȭ ");
#pragma region �迭 �Ϻΰ� �ʱ�ȭ
	int arr[10] = { 1, 2 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	// ���ȣ ���ο� �迭 ũ�⸦ �������� �ʰ�, �ʱ�ȭ �κп� ���� �־��൵ �����Ϸ��� �ڵ����� �迭�� ä���־��ش�. 
#pragma endregion

	printf("\n\n�Ǽ���");

#pragma region �Ǽ��� �迭 �ʱ�ȭ
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

#pragma endregion 

	return 0;
}