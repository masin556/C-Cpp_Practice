#include "../../help.h"

int main()
{
	int a = 10, b = 20, c = 30;
	int* p = &a;
	int& r = b;
	int** pp = &p; //p��� �����͸� ����Ű�� ���� ������ pp
	int* (&rp) = p; //p��� �����͸� ����Ű�� ���۷��� ���� rp

	r = c / *p;
	rp = &c;
	**pp = 40;
	*p = 50;
	*pp = &a;
	*rp = 60;

	cout << "a : " << a << " " << &a << endl;
	cout << "b : " << b << " " << &b <<endl;
	cout << "c : " << c << " " << &c << endl;
	cout << "*p : " << *p << " " << *(&p) << endl;
	cout << "r : " << r << " " << &r << endl;
	cout << "**pp : " << **pp << " " << **(&pp)<< endl;
	cout << "*rp : " << *rp << " " << *(&rp) << endl;

	return 0;
}