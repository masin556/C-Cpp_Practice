#include "../help.h"

class Animal
{
public:
	void Breath() { cout << "¼ûÀ» ½®´Ù." << endl; }
	int age;
};

class Dog : public Animal
{
public:
	void Walk() { cout << "°È´Â´Ù." << endl; }
};

class Sparrow : public Animal
{
public:
	void Fly() { cout << "³­´Ù" << endl; }
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