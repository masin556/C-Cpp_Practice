/*���� ���� ��ȣ��
����Ʈ �Ű������� ���� ���ǰ� ���յǸ� ������ ��ȣ���� �߻��� ���ִ�.*/

#include "pch.h"

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

int main()
{
	//TestFunc(5);
	TestFunc(5, 10); //�̻��Ѱ� �̰� �� �ȴ�.?
	
	/* �ڽ��� ���� �Լ��� ��ü�� ����ϴ� �� �ٸ� �����ڸ� ����ؾ��Ѵ�.
	������� �Ǽ��� �����ϱ� ���� ���
	*/
	return 0;
}