/* ��� printf�� �ܶ� ����� �ݺ���Ű�� ���� ��ȿ�� ���̰� �ڵ尡 ���⵵ ���� �ʴ�. */
#include <stdio.h>

int main(void)
{
#pragma region for��
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}//printf�� 10�� ����ϰ� �ȴ�.

#pragma region

#pragma region for��
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World! %d\n", i++);
		//i++;
	}
#pragma region

#pragma region do-while��
	int j = 1;
	do {
		printf("HelloWorld! %d \n");
	} while (i <= 10);
#pragma endregion

	return 0;
}