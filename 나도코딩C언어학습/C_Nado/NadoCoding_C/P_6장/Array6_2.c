/*�迭�̶�*/

#include <stdio.h>

int main(void)
{
#pragma region �迭
	int subway_array[3]; //�迭 ���� > �ڷ��� �迭��[�迭ũ��];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}

#pragma endregion
	return 0; 
}