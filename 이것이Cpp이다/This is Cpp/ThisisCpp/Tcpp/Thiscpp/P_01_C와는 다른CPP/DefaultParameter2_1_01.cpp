/*����Ʈ �Ű�����
*/

#include "pch.h"


//nParam �Ű������� ����Ʈ ���� 10�̴�.
int TestFunc(int nParam = 10)
{
	return nParam;
}


int main()
{
	//ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc() << endl;

	
	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc(20) << endl; //Default���� 20���� ����


	return 0;
}
