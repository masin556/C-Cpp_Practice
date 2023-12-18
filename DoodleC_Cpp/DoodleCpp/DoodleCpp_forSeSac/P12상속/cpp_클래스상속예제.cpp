#include "../help.h"

class Animal
{
public:
	void Breath() { cout << "���� ����." << endl; }
	int age;
};

class Dog : public Animal
{
public:
	void Walk() { cout << "�ȴ´�." << endl; }
};

class Sparrow : public Animal
{
public:
	void Fly() { cout << "����" << endl; }
};


int main()
{
	Dog d;
	d.age = 7;
	d.Breath();
	d.Walk();
	cout << d.age << endl;

	Sparrow s;
	s.age = 2;
	s.Breath();
	s.Fly();
	cout << s.age << endl;

	cout << d.age << endl;
}