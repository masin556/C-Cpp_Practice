/*���� ���� , �����ε� 
C++������ �Ű����� ������ �޶����ų� � �����ε� �Լ� ������ �޶����� �̸��� ������ �ٸ� �Լ��� �ȴ�.

Add()�Լ��� �� ���� ���·� ���� ���� */

#include "pch.h"

int Add(int a, int b, int c)
{
	cout << "Add(int, int , int) : ";

	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int) : ";

	return a + b;
}

double Add(double a, double b)
{
	cout << "Add(double, double): ";

	return a + b;
}


int main(int argc, wchar_t argv[])
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}