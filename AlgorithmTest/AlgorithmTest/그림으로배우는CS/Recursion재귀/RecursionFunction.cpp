#include <iostream>

using namespace std;

void myFunction(int number)
{
	if (number > 3) return;
	cout << number << endl;
	myFunction(number + 1);
}

int main()
{
	int n = 1;
	myFunction(1);

	return 0;
}