#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0; 
	cin >> n;
	
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
			cout << i;
			if (i != n/2)
			{
				cout << "+";	
			}
		}
	}
	cout << "=" << sum << '\n';
	
	return 0;
}
