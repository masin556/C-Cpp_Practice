/*�߸��� ���� �Էµ� ���� �����ϱ� */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a[100];
	string b;
	//getline(cin, a); string�� ���
	cin.getline(a, 100); 
	
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if ('A' <= a[i] && a[i] <= 'Z')
				b += (a[i] + 32);
			else b += a[i];
		}
	}
	cout << b << endl;
} 
