#include "../help.h"

class Base
{
public:
	int bPublic;


protected:
	int bProtected;


private:
	int bPrivate;
};

class Derived : public Base
{
public:
	void DFunc()
	{
		bPublic = 1;
		bProtected = 2; //�θ� Ŭ������ protected�� ���ٰ���
		//bPrivate = 3;  //����
	}
};


int main()
{
	Base b;
	Derived d;

	b.bPublic = 2;
	//protected�� private�� �Ұ��� 
}