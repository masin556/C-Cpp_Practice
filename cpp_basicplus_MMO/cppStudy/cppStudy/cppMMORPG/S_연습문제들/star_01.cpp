#include <iostream>
using namespace std;

int main()
{
//�� ��� 
	//�������� � ������ �Է��ϸ� 
	//N*N���� ���� ������� ���ڴ�. 

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

