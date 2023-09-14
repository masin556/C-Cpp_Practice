/*세로크기가 2이고 가로크기가 3인 2x3 형태의 정수형 2차원 배열을 선언하는 코드를 작성하세요*/

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
