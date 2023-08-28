#include <stdio.h>

int main()
{
#pragma region Printf
	//printf("Hello World!\n");

#pragma endregion

#pragma region age
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);
#pragma endregion

	return 0;
}

#pragma region 주석
/*주석은 간단하기에 건너뛴다*/
// 이런식으로

//단축키 : Ctrl + k + c(주석) \ Ctrl + k + u(주석해제)
//특정 범위를 넘어가게 되면 문자열 주석 처리 됨

//평소 주석은 개발 과정중에 오류를 범할 수 있고, 이후 에일리언 코드가 되는 것을 방지하기 위해
// 주석을 넣는 것은 거의 필수 이다. 개발 이후 유지보수가 편할 수 있도록 해당 함수나 코드 부분에 너무 많이가아니라
// 적당히 주요 코드에는 주석을 달아두는 편이 좋다. (설명)
// 주석에 대한 공부를 따로 하는 편이 좋을 수 있다.

#pragma endregion