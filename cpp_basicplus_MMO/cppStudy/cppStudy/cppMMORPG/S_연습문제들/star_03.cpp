#include <iostream>
using namespace std;

int main()
{
	//별찍기 3
	// 모양이 많이 개선?
	//N개 부터 시작해서 줄마다 1개씩 줄어드는 형태


	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < (N - i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}