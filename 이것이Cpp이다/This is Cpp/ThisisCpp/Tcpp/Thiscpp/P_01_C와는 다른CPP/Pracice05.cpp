/*����� ������ ������ ���� ���İ� ũ�� �ٸ� ���� ��������?*/

/*
���� ���� 
1. ������ ���� ����, ������ �� ���氡�� 
2. ������ ���� �����̱⿡ ������ ����, ������ ���� �����ϸ� ���� ���� ���� ����ȴ�.

����� ����( R-value)
1. ���� �Ǵ� �ӽ� ���� ���� ����, ���� ���� ���� �ְ�, ������ �� ����.
2. ������ ���� �б⸸ ���� */

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 20;
	int& nonConstRef = a; //���� ����

	nonConstRef = 10; //�� ���� ����
	cout << nonConstRef << endl;

	const int b = 30;
	const int &constRef = b; //����� ����

	cout << constRef << endl;


	int&& rvalueRef = 10; //R-value
	// rvalueRef = b; ������ ���� : r-value �� �������� �ȵǰ� ���浵 �Ұ����ϴ�.
	cout << rvalueRef << endl;
}
