#include<iostream>

using namespace std;

int main()
{
	//문자 상수 M으로부터 char형 변수 ch로 8비트 만 복사
	char ch = 'M';
	cout << ch << endl;

	//문자 S를 출력하지 않고 S에 해당하는 ASCII코드 36을 출력했다 -> C++ Release2.0이전 현재는 문자로 출력됨
	cout << 'S' << endl;

	//cout.put() 멤버함수는 << 연산자를 사용하여 문자를 출력하는 것에 대한 대안
	//원하는 대로 문자 S를 출력C++은 문자 상수를 int형이 아닌 char형으로 저장
	cout.put('S');

	cout << "이것은 개행문자 입니다.\n 고로 이렇게 표현합니다. \n 안녕하세요! \n";

	//16비트 문자
	char16_t ch1 = u'q'; //113 출력
	cout << ch1 << "\n";

	//32비트 유니버설 문자이름
	char32_t ch2 = U'\U0000222B'; //8747 출력
	cout << ch2 << endl;
}