#include <iostream>
using namespace std;

int main()
{
	//�����2)
	// Order : N*N���� ���� �����ϱ� �ʹ� �ɽ��ϴ�.
	// 1�� ���� �����ؼ� ���������� �ٸ��� �����ϰ� �������ּ���!

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
