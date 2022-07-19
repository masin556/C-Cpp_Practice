#include<iostream>
//#define PI 3.1415926535
using namespace std;

int main()
{
	//원의 넓이를 구하는 프로그램
	//반지름 * 반지름 * 파이
	
	const float Pi = 3.1415926535;

	int r = 3;
	float s = r * r * Pi;

	////////////////
	// 1. 바뀔 필요가 없는 수 ,
	// 2. 바뀌어서는 안되는 수,
	// 상수 

	cout << s << endl;

	return 0;
}