/*제작자가 구현한 코드*/

#include <stdio.h>

//제작자 코드
typedef struct USERDATA
{
	int nAge;
	char szName[32];

} USERDATA;

void PrintData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

//사용자코드
int main()
{
	USERDATA user = { 20, "철수" };
	//printf("%d %s", user.nAge, user.szName);
	PrintData(&user);

	return 0;
}

/*관리자는 편하고 사용자는 불편한 현실*/