#include <iostream>
using namespace std;

int main()
{
	char a[100];
	int result = 0, cnt = 0;
	scanf("%s", &a);
	
	for (int i = 0; a[i] != '\0'; i++) //  ���ڿ� �˻�  
	{
		if (a[i] >= 48 && a[i] <= 57) // ���ڼ����� ����
		{ 
			result = result * 10 + (a[i]-48);
		}
	}
	cout << result << endl;
	
	// �̾Ƴ� ������ ����� ����
	for(int i = 1; i <= result; i++) 
	{
		if (result % i == 0)
		{
			cnt++;
		}
	}
	
	cout << cnt;
}	
