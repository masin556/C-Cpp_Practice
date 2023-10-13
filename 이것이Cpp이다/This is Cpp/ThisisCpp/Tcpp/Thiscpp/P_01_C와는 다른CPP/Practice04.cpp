/*int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요. 
함수 원형은 void Swap(int &a, int &b) 입니다.*/

#include "pch.h"
#include <iostream>

using namespace std;

void Swap(int& a, int& b);

int main()
{
	int x, y;

	cout << "값 2개를 입력해주세요 : " << endl;
	cin >> x >> y;


	Swap(x, y);
	cout << x << endl << y << endl;
}


void Swap(int& a, int& b)
{
	int Temp = a;
	a = b;
	b = Temp;
}