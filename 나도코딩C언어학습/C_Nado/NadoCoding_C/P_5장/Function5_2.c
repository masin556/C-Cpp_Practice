/*사칙연산*/

#include <stdio.h>

//함수 선언부 (반환형void_ 함수선언p_ 값전달_int num)
void p(int num);

int main()
{
#pragma region 사칙연산
	//int num = 2;

	//printf("num은 %d입니다.\n", num);

	//num += 3;
	//printf("num은 %d입니다.\n", num);

	//num -= 1; 
	//printf("num은 %d입니다.\n", num);

	//num *= 3;
	//printf("num은 %d입니다.\n", num);

	//num /= 6;
	//printf("num은 %d입니다.\n", num);
#pragma endregion 2 5 4 12 2

#pragma region 함수로 사칙연산5_2_2
	//int num = 2;

	//p(num);

	//num = num + 3;
	//p(num);

	//num = num - 1;
	//p(num);
	//
	//num = num * 3;
	//p(num);

	//num = num / 6;
	//p(num);
#pragma endregion

	return 0;
}


//함수작성부 (함수정의)
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}