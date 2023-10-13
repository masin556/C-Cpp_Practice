/*�޸� ���� �Ҵ�*/

//C���� ����ϴ� malloc �� free�� ���ְ�, new �� delete �����ڸ� ����ϸ�ȴ�.
// new �� delete�ȿ��� malloc �� free �Լ��� ȣ���Ѵ�.  (���Ǽ��� ��������)


/*1.5.1 new�� delete������
: C++���� ��ü�� ���� �Ҵ��ϰ� �����ϴ� '������'

�������� >
���� *�����̸� = new ����;
delete �����̸�;

�迭���� >
���� *�����̸� = new ����[��Ұ���];
delete[] �����̸�;

*/

#include "pch.h"
#include <iostream>

using namespace std;

int wmain(int argc, wchar_t * argv[])
{
#pragma region new ������ ���
	//�ν��Ͻ��� �������� ����
	cout << "\n" << "�ν��Ͻ��� �������� ����" << endl;
	int* pData = new int; // ���� �� �ʱ�ȭ


	//�ʱ갪�� ����� ��
	int* pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
#pragma endregion


#pragma region �迭�����ǰ�ü����
	//��ü�� �迭 ���·� ���� ����
	cout << "\n\n" << "��ü�� �迭 ���·� ���� ����" << endl;
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

#pragma endregion
	return 0;
}
