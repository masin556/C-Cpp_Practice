// morechar.cpp - char���� int���� ��

#include <iostream>
using namespace std;

int main()
{
	char ch = 'M'; //M�� �ش��ϴ� ASCII �ڵ� char�� ���� ch�� ����
	int i = ch;    //���� �ڵ带 int�� ���� i �� ����
	cout << ch << "�� ASCII �ڵ�� " << i << " �Գ״�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch += 1;  // ch = ch + 1;
	i = ch;   // i�� ���ο� �����ڵ� ����
	cout << ch << "�� ASCII �ڵ�� " << i << " �Դϴ�." << endl;

	// cout.put() ��� �Լ��� ����Ͽ� char�� ���� ch�� ����Ѵ�.
	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
	cout.put(ch);

	// cout.put()�� ����Ͽ� ���� ����� ����Ѵ�.
	cout.put('!');

	cout << endl << " ���� " << endl;
	return 0;
}
