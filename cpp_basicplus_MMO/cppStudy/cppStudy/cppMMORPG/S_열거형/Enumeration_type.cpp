#include <iostream>

using namespace std;

const int SICSSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

enum ENUM_SRP
{
	ENUM_SICSSORS = 1,
	ENUM_ROCK,
	ENUM_PAPER
};

#define DEFINE_TEST 1+2 //상수 사용시 define지양..
#define DEFINE_SISSORS 1
#define DEFINE_TEST2 cout << "Hello World!" << endl;

int main()
{
	int value = ENUM_ROCK;

	DEFINE_TEST2;
}