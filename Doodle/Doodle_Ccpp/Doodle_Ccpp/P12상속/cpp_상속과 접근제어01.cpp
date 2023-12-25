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
		bProtected = 2; //부모 클래스의 protected도 접근가능
		//bPrivate = 3;  //에러
	}
};


int main()
{
	Base b;
	Derived d;

	b.bPublic = 2;
	//protected와 private은 불가능 
}