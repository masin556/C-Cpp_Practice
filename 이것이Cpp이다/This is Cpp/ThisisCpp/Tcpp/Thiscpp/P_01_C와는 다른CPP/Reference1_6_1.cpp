/*�Ű� ������ �ִ� ������*/


#include "pch.h"
#include <iostream>

using namespace std;

//�Ű������� int�� ���� ���� �����̴�.
void TestFunc(int& rParam)
{
	//��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}

//���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}
///////////////////////////////////////////////////////////////
int main(int argc, wchar_t argv[])
{
	cout << "�Ű� ����" << endl;
#pragma region TestFunc�Ű���������
	int nData = 0;

	// ������ ���� �μ� �����̴�.
	TestFunc(nData);
	cout << nData << endl;

#pragma endregion

	cout << "\n" << "��������" << endl;
#pragma region Swap��������
	int x = 10, y = 20; 

	//���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(x, y);

	//��ȯ�� ����� ����Ѵ�.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

#pragma endregion
	return 0;
}