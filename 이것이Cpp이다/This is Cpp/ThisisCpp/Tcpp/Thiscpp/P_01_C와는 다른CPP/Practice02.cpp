/*C++11���� auto ������ ��ǹ����� ���� �ڵ�� ���� ���̶�
- auto : 
1. �ݺ����� �迭 Ƚ���� �ڵ����� ���� �ش�. 
2. ���� ��ȭ�� ���� ���ǽ� ������ �ʿ����. 
*/


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for (auto q : n) {
		cout << q << ' ';
	}

	return 0;
}
