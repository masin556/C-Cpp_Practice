/*��� ���� �ʱ�ȭ�� ���� ������ �Լ� ���*/

#include "pch.h"


class CTest
{
public:
	//CTest Ŭ������ '�������� �Լ�' ���� �� ����
	CTest() //������
	{
		m_nData = 10;
	}

	int m_nData;

	//��� �Լ� ���� �� ����	
	void PrintData(void)
	{
		//��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
		cout << m_nData << endl;
	}
	
};



int main()
{
	CTest t; // ������ ȣ��
	t.PrintData();

	return 0;
}