/*��������*/
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	//freopen("input.txt", "rt", stdin);
	int n, max_age = -2147000000, min_age = 2147000000; //  max ���� ���� ������ �־� ��ü��Ű�� , min���� ū ���� �־� ���� ���� �޵��� �Ѵ�.  
	cin >> n;
	int N[n] = {0,};
	
	for (int i = 0; i < n; i++)
	{
		cin >> N[i];
		max_age = max(max_age, N[i]);
		min_age = min(min_age, N[i]);
		
		//if (N[i] > max_age) max_age = N[i];
		//if (N[i] < min_age) min_age = N[i];
	}
	printf("%d", max_age-min_age);
	return 0;
} 
