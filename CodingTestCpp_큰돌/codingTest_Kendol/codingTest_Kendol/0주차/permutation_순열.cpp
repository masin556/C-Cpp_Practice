#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a = { 2, 1, 3, 100, 200 };
	sort(a.begin(), a.end());

	do {
		for (int i = 0; i < 2; i++)
		{
			cout << a[i] << " ";
		}
		cout << '\n';
	} while (next_permutation(a.begin(), a.begin()));

}
