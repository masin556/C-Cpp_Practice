#include <iostream>
using namespace std;

int main()
{
	//����� 3
	// ����� ���� ����?
	//N�� ���� �����ؼ� �ٸ��� 1���� �پ��� ����


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