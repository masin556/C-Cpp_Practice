/*구조체 안에 함수를 집어넣어 버리자!*/
#include <stdio.h>

//관리자 코드
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	void(*Print)(struct USERDATA*);
} USERDATA;

void PrintfData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

//사용자 코드 
int main(void)
{
	USERDATA user = { 20, "철수", PrintfData };
	//printf("%d %s", user.nAge, user.szName);   //1단계
	//PrintData(&user);                          //2단계
	user.Print(&user);                           //3단계

	return 0;
}