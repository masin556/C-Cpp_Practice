#include <iostream>
using namespace std;

int main()
{
	//구구단
	// 2*1=2
	// 2단 부터 - 9단 까지 구구단 출력

	for (int i = 2; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}