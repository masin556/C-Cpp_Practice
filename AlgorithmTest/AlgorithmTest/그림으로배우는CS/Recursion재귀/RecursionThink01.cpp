#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int sumArray(int* arr)
{
	if (*arr.size() == 1)
	{
		return arr[0];
	}
}

int main()
{
	int sum[] = { 1, 2, 3, 4, 5 };
	int size;
	size = sizeof(sum) / sizeof(sum[0]); // sizeof(12345) = 4byte * 5 = 20 ; sizeof(sum[0]) => 1 => 4byte =>나누면 5 나옴
	for (int i = 0; i < sum.size();)
}