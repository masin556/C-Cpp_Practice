#include <iostream>
using namespace std;

int main()
{
	//별찍기2)
	// Order : N*N개의 별을 찍으니까 너무 심심하다.
	// 1개 부터 시작해서 순차적으로 줄마다 증가하게 수정해주세요!

	int N;
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
