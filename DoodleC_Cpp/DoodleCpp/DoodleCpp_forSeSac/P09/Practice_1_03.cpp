#include <iostream>

using namespace std;

int main()
{
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	for (const auto& row : arr)
	{
		for (const auto& element : row)
		{
			cout << element << " ";
		}
		cout << endl;
	}
	return 0;
}