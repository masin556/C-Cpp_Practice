/*����ũ�Ⱑ 2�̰� ����ũ�Ⱑ 3�� 2x3 ������ ������ 2���� �迭�� �����ϴ� �ڵ带 �ۼ��ϼ���*/

#include <stdio.h>

int main(void)
{
	int arr2[2][3] = { {1, 2, 3}, {4, 5, 6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr2[i][j];
			printf("%d", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
