#include <iostream>
using namespace std;

int main() 
{
	//������ �� ��ȯ

	int a = 3.14159265;

	cout << a << endl;

	//���������� �������� ��ȯ
	// typeName(a) or (typeName)a
	
	char ch = 'M';
	//cout << (int)ch << "   " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	return 0;
}