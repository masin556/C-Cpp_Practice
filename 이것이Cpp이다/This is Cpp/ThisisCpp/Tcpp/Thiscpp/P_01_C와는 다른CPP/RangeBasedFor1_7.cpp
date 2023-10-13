/*���� ��� for��*/

/* for���� ��κ� ����Ƚ���� �߽����� �ݺ��Ѵ�.(while���� �ݺ� Ƚ�����ٴ� ������ �߽����� �ݺ��Ѵ�.)
�迭 �ڷᱸ���� ������ �� for���� ���ֻ��(�̴� �迭�� ��Ұ� ������ �� Ȯ���Ǳ� ����

���� - 
for(auto ��Һ��� : �迭�̸�)
	�ݺ� ����;
-
�ݺ� Ƚ���� �迭 ��� ������ ���� �ڵ����� �����ȴ�.
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, wchar_t argv[])
{
	int aList[5] = { 10, 20, 30, 40, 50 };


	cout << "�������� C ��Ÿ�� �ݺ���" << endl;
	//�������� C ��Ÿ�� �ݺ���
	for (int i = 0; i < 5; i++) {
		cout << aList[i] << ' ';
	}

	cout << "\n" << endl; // �ٹٲ�

	cout << "���� ��� C++11 ��Ÿ�� �ݺ���" << endl;
	//�� ����� ���� n�� �����Ѵ�.
	for (auto n : aList) {
		cout << n << ' ';
	}

	// ' ' ����
	cout << endl; // �ٹٲ�

	// n�� �� ��ҿ� ���� �����̴�.
	for (auto& n : aList) {
		cout << n << ' ';
	}

	cout << endl; // �ٹٲ�

	return 0;
}