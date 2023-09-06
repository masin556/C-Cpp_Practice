#include <stdio.h>
/* 해당 조건에 따라 if 와 else로 분기해서 그 해당 조건에 맞는 곳 중괄호
안을 실행시킨다.*/


int main(void)
{
#pragma region if . else
	//int age = 15;
	//if (age >= 20)
	//{
	//	printf("성년입니다.\n");
	//}
	//else
	//{
	//	printf("청소년 입니다.\n");
	//}
#pragma endregion


#pragma region if_elseif_else4.2.2
	//int age = 9;

	////논리연산을 사용하여 만든 것을 이해하고가자
	//if (age >= 8 && age <= 13) // age가 8보다 크거나 같고, 13보다 작거나 같아야 한다.
	//{// 두 조건이 만족되었을 때에만 들어올 수 있음.
	//	printf("초등학생입니다.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다. \n");
	//}
	//else if (age >= 17 && age <=19)
	//{
	//	printf("고등학생입니다. \n");
	//}
	//else
	//{
	//	printf("청소년이 아닙니다.\n");
	//}
#pragma endregion

#pragma region AND 4.2.3
	int age = 0;
	int a, b, c, d;
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);

	/* AND는 두 조건이 모두 만족해야한다.*/
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (a == b && c == d)
	{
		printf("a가 b와 같고 c와 d도 같습니다.\n");
	}
	else
	{
		printf(" 값이 서로 다르다.\n");
	}

#pragma endregion

#pragma region OR
	/* 두 조건 중 하나라도 맞다면 가능*/
	if (a == b || c == d)
	{
		printf("a와 b또는 c와 d의 값이 같다.\n");
	}

#pragma endregion
	return 0;
}