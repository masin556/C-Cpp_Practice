/*int�� �迭�� ������������ ������ ����� ����ϴ� ���α׷� �ۼ�
�� ȭ�鿡 �迭 ���� ��½� ���� ���for���� ���*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int aList[5] = { 10, 20, 30, 40, 50 };

	for (auto q : aList)
	{
		cout << q << ' ';
	}

	return 0;
}