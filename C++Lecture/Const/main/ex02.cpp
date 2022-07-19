#include <iostream>
using namespace std;

int main() 
{
	//데이터 형 변환

	int a = 3.14159265;

	cout << a << endl;

	//강제적으로 데이터형 변환
	// typeName(a) or (typeName)a
	
	char ch = 'M';
	//cout << (int)ch << "   " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	return 0;
}