/*int�� ���� ���� ������ �Ű������� �ް� �� ������ ���� ��ȯ�ϴ� �Լ��� �ۼ��ϼ���. 
�Լ� ������ void Swap(int &a, int &b) �Դϴ�.*/

#include "pch.h"
#include <iostream>

using namespace std;

void Swap(int& a, int& b);

int main()
{
	int x, y;

	cout << "�� 2���� �Է����ּ��� : " << endl;
	cin >> x >> y;


	Swap(x, y);
	cout << x << endl << y << endl;
}


void Swap(int& a, int& b)
{
	int Temp = a;
	a = b;
	b = Temp;
}