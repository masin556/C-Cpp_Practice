/*memberInit1 변형 생성자 초기화 목록*/

#include "pch.h"

class CTest
{
public:
	//생성자 초기화 목록을 이용한 멤버 초기화
	CTest()
		: m_nData1(10), m_nData2(20)
	{ }

	// 두 개의 멤버 데이터 선언
	int m_nData1;
	int m_nData2;

	//멤버 함수 선언 및 정의
	void PrintData(void)
	{
		//두 개의 멤버 데이터에 접근하고 값을 출력한다.
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();

	return 0;
}