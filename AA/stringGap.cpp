/*잘못된 문자 입력된 것을 복구하기 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a[100];
	string b;
	//getline(cin, a); string인 경우
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
