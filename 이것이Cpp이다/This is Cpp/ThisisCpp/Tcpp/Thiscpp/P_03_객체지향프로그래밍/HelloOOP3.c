/*����ü �ȿ� �Լ��� ����־� ������!*/
#include <stdio.h>

//������ �ڵ�
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

//����� �ڵ� 
int main(void)
{
	USERDATA user = { 20, "ö��", PrintfData };
	//printf("%d %s", user.nAge, user.szName);   //1�ܰ�
	//PrintData(&user);                          //2�ܰ�
	user.Print(&user);                           //3�ܰ�

	return 0;
}