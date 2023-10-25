/*Namespace ���� ���� : C++ �ĺ��ڴ� '���ӽ����̽�::�̸�'�� ���¸� ���Ѵ�. 
���ӽ����̽��� �̸��� �޶� ������(�Լ��̸��� �Ű������� ����)�� ���� ���·� ����Ǿ��ٸ� ���� ���ǰ� �����ϴ�.*/


#include "pch.h"


//���� (����� ���Ҽ�)
void TestFunc(void) 
{
	cout << "::TestFunc()" << endl; 
}

namespace TEST
{
	// TEST ���ӽ����̽� �Ҽ� 
	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA
{
	//MYDATA ���ӽ����̽�
	void TestFunc(void) {
		cout << "DATA::TestFunc()" << endl;
	}
}


int main(int argc, wchar_t argv[])
{
	TestFunc(); //������ ����
	::TestFunc(); //���������
	TEST::TestFunc();
	MYDATA::TestFunc();

	return 0;
}