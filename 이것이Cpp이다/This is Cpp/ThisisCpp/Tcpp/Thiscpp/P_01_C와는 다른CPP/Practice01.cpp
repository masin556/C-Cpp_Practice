/*�ڽ��� �̸��� ���̸� �Է¹ް� "���� �̸��� ȫ�浿�̰�, 20���Դϴ�"��� ����ϴ� ���α׷��� �ۼ��ϼ���,
��. �ݵ�� std:cout std::cin�� ���*/

#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
	char name[10];
	int age = 0;

	cout << "���� : ";
	cin >> age;

	cout << "�̸� : ";
	cin >> name;

	cout << "���� �̸��� " << name << "�̰�, " << age << "�� �Դϴ�." << endl;
}