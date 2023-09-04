#include <stdio.h>

int main(void)
{
#pragma region break
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6) {
	//		printf("나머지 학생은 집에 가세요\n");
	//		break; // 출력을 끊어줘야 한다.
	//	}

	//	printf("%d번 학생은 조별 발표를 준비하세요\n", i);
	//}
#pragma endregion


#pragma region continue
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
		}
		printf("%d번 학생은 조별 발표를 준비하세요\n", i);
	}

#pragma endregion


	return 0;
}