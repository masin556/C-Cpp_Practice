// std::cin
#include "pch.h"
#include "tchar.h"
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int nAge;
	cout << "���̸� �Է��ϼ���." << endl;
	cin >> nAge;

	//������ �迭����
	char szJob[32];
	cout << "������ �Է��ϼ���." << endl;
	cin >> szJob;

	//���ڿ� ����
	string strName;
	cout << "�̸��� �Է��ϼ���. " << endl;
	cin >> strName;

	cout << "����� �̸��� : " << strName << "�̰�, "
		<< "���̴� " << nAge << "���̸�, "
		<< "������ " << szJob << "�Դϴ�." << endl;


	return 0;
}


//////////////////////
/* 
�� ������ ���࿡ C�� �߾��ٸ� 
���������ڸ� �̿��ؼ� ����ؾ� �ϸ�, 
char �� ���ڿ� ���� ���� ������ �����.*/