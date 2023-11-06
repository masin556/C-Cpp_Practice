/*접근제어지시자 사용 클래스*/

#include <iostream>
#include <cstdio> //c 문법 사용

using namespace std;

class USERDATE
{
public:
	//멤버 변수 선언
	int nAge;
	char szName[32];

	void Print(void)
	{
		//nAge와 szName은 Print() 함수의 지역 변수가 아니다.
		printf("%d, %s\n", nAge, szName);
	}
};


// 사용자 코드
int main()
{
	USERDATE user = { 10, "철수" };
	user.Print(); //정말 간단하다... 

	return 0;
}