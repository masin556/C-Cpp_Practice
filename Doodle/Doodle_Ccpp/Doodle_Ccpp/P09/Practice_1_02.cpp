#include <iostream>
using namespace std;

int main()
{
	char str[] = "Hello World!";
	cout << str << endl; // str 자체를 가리킴
	cout << *str << endl; // 배열의 첫번째 주소를 가리킴
}