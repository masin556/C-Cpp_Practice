#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
#pragma region 가위 바위 보 switch
	//int i = 1;

	//switch (i)
	//{
	//case 0:
	//	printf("가위\n");
	//	break;
	//case 1:
	//	printf("바위\n");
	//	break;
	//case 2:
	//	printf("보\n");
	//	break;

	//default:
	//	printf("나는 잘 모르오!\n");
	//}
#pragma endregion  바위만 나옴

#pragma region 4.4.3
	int age = 14;
		
	switch (age) {
	//별도 구분없이 
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("초등학생입니다.\n");
		break; // 8을 실행하면 9 10 11 12 13을 만나고 break로 오게된다. 
	case 14:
	case 15:
	case 16:
		printf("중학생입니다\n");
		break;
	case 17:
	case 18:
	case 19:
		printf("고등학생입니다\n");
		break;
		
	default:
		printf("청소년이 아닙니다\n");
	}
#pragma endregion
	return 0;
}