/*���ڿ� ��� �ٷ��*/

#include <stdio.h>

int main()
{

#pragma region ���ڿ��迭���ι���
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array);

#pragma endregion

	printf("\n\n ------------- \n");

#pragma region ���ڿ��迭���ι���2
	char c_array2[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%d\n", c_array2[i]); 

	}

#pragma endregion

	printf("\n\n ------------- \n");

#pragma region ���ڿ��Է¹ޱ�6_5_2
	char name[256];
	printf("�̸��� ������? : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
#pragma endregion


	return 0;
}