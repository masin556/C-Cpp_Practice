/*�������������� ��� Ŭ����*/

#include <iostream>
#include <cstdio> //c ���� ���

using namespace std;

class USERDATE
{
public:
	//��� ���� ����
	int nAge;
	char szName[32];

	void Print(void)
	{
		//nAge�� szName�� Print() �Լ��� ���� ������ �ƴϴ�.
		printf("%d, %s\n", nAge, szName);
	}
};


// ����� �ڵ�
int main()
{
	USERDATE user = { 10, "ö��" };
	user.Print(); //���� �����ϴ�... 

	return 0;
}