/*������ ���� 
���۷��� 
1. C���� ����. 
2. �����Ϳ� ���������� ����ϴ�.(����� ������ ���� ����)
3. ����� ���ÿ� �ݵ�� �ʱ�ȭ
���� &�̸� = ����;
C++������ �����ڴ� �������� ������ ���ϵǾ� ��õ� �� 
������ ���� Ư�� ��찡 �ƴ϶�� ��κ� ������ ������*/

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, wchar_t argv[])
{

#pragma region �������������
	int nData = 10;

	//nData ������ ���� ������ ���� 

	int& ref = nData;

	// ������(ref)�� ���� �����ϸ� ����(nData)�� ����ȴ�. 
	ref = 20; 
	cout << nData << endl;

	// �����Ϳ� ��� 
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl; 
#pragma endregion

	return 0;
}