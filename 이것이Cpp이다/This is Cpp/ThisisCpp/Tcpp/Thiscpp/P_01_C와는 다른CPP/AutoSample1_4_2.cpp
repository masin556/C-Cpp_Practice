/*auto ����� C�ʹ� �ٸ� ���� ���ο�
�ʱ갪�� ���Ŀ� ���� �����ϴ� �ν��Ͻ��� ������ '�ڵ�'���� �����ȴ�.
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b(a);

	//auto c(b);
	int c(b); //??????

	cout << a + b + c << endl;

	return 0;
}
