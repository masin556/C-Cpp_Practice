#include "../help.h"

//���� Ŭ����
class Base
{
public:
	void bFunc()
	{
		cout << "hello from base class!" << endl;
	}

	int bNum;
};

//���� Ŭ����
class Derived : public Base
{
public:
	void dFunc()
	{
		cout << "Hello from Derviced!" << endl;
	}

	int dNum;
};


class Children : public Derived
{
	void cFunc()
	{
		cout << "children Baby class" << endl;
	}

	int cNum;
};


int main()
{
	Base b; //�θ� Ŭ����
	Derived d; // �ڽ� Ŭ����
	Children c; // ���� Ŭ���� 


	// �θ� Ŭ�����Լ��� ����
	b.bFunc();
	b.bNum = 1;
	cout << b.bNum << " " << &b << endl;

	//�ڽ� Ŭ�������� �θ�Ŭ������ �Լ��� ����
	d.bFunc();
	d.bNum = 1;
	cout << d.bNum  << " " << &d << endl;
	
	d.bFunc();
	d.bNum = 2;
	cout << d.bNum << endl;
	d.dFunc();
	d.dNum = 1;
	cout << d.dNum << endl;


	c.bFunc();
	cout << c.bNum << " " << &c << endl;
	c.bNum = 3;
	cout << c.bNum  << " " << &c << endl;
	c.dFunc();
	c.dNum = 4;
	cout << c.dNum << endl;


}