/*�Ű������� ����Ʈ ���� '����'�� �Լ��� ȣ���� �ڵ忡�� ���μ��� ������ ä ȣ�� �����ϴ�.
�Ű� ������ ����Ʈ ���� �ݵ�� �Լ� ������ ���� �κп� ����ؾ��Ѵ�.*/

/* 
cout << TestFunc(10) << endl;
cout << TestFunc() << endl;
�� �ڵ� ��� �����ϴ�.

�׷��� ȣ���� �ڵ常 ���� �Լ� ������ Ȯ����� �ȵȴ�. 
*/

#include "pch.h"

int TestFunc(int = 10);

int TestFunc(int nParam)
{
	return nParam;
}


int main()
{
	cout << TestFunc(20) << endl;

	return 0;
}

