#include "../help.h"

//상위 클래스
class Base
{
public:
	void bFunc()
	{
		cout << "hello from base class!" << endl;
	}

	int bNum;
};

//하위 클래스
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
	Base b; //부모 클래스
	Derived d; // 자식 클래스
	Children c; // 손자 클래스 


	// 부모 클래스함수와 변수
	b.bFunc();
	b.bNum = 1;
	cout << b.bNum << " " << &b << endl;

	//자식 클래스에서 부모클래스의 함수와 변수
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