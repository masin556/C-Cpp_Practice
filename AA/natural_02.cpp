#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	
	for (int i = a; i <= b; i++)
	{
		sum += i; 
		cout << i;
		if (i != b)
		{
			cout << "+";
		}
	}
	cout << "=" << sum << endl;
	
	return 0;
}