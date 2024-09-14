#include <iostream>
using namespace std;

int main()
{
	//������
	// 2*1=2
	// 2�� ���� - 9�� ���� ������ ���

	for (int i = 2; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}