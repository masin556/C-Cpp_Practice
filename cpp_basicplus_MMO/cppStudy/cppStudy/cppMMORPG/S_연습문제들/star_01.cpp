#include <iostream>
using namespace std;

int main()
{
//별 찍기 
	//유저들이 어떤 정수를 입력하면 
	//N*N개의 별을 찍었으면 좋겠다. 

	int N;
	cin >> N;

	char star = '*';

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << star;
		}
		cout << endl;
	}
	return 0;
}

