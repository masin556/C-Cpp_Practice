/*char[12] �迭 �޸𸮸� new �����ڷ� �����Ҵ��ϰ� �����ϴ� �ڵ� ���� �ۼ��Ͻÿ�*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char *wChar = new char[12];

	cout << "�ܾ �Է��ϼ��� : ";
	cin >> wChar;

	cout << wChar << endl;

	delete[] wChar;

	return 0;
}

