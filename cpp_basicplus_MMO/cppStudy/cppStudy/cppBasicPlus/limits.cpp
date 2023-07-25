/*정수형 범위 알아내는 법*/

#pragma region sizeof & climits사용
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n_int = INT_MAX;  //n_int를 int형의 최대값으로 초기화
	short n_short = SHRT_MAX;  //limits.h 파일에 정의된 기호 상수
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다.
	cout << "int는 " << sizeof(int) << " 바이트이다." << endl;
	cout << "short는 " << sizeof n_short << " 바이트이다." << endl;
	cout << "long는 " << sizeof n_long << " 바이트이다." << endl;
	cout << "long long는 " << sizeof n_llong << " 바이트이다." << endl;
	cout << endl;

	cout << "최대값:" << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << "int의 최소 최대 = " << INT_MIN << " ~ " << n_int << endl;
	cout << "char의 비트 수 = " << CHAR_BIT << endl;

	return 0;
}

#pragma endregion