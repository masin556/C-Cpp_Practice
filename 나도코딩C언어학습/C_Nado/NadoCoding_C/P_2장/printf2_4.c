/*printf() �Լ� ����*/
#include <stdio.h>

int main()
{
#pragma region printf_01
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
#pragma endregion 3 + 7 = 10

#pragma region printf_02
	printf("%d + %d = %d\n", 30, 79, 30 + 79);
	//���� �տ��� ���� ������� ����. 
#pragma endregion 30 + 79 = 109

#pragma region printf_03
	printf("%d x %d = %d\n", 30, 79, 30 * 79);
	//��Ģ���� ����
#pragma endregion 30 x 79 = 2370

	return 0;
}