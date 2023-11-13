/*생성자에 일일이 값을 기술하는 것이 귀찮다면 C++11스타일*/
#include "pch.h"

class CTest
{
public:
	//생성자 초기 화 목록을 이용한 멤버 초기화
	CTest() { }

	//C++11부터 선언과 동시에 멤버 변수를 초기화 할 수 있다!.
	int m_nData1 = 10;
	int m_nData2 = 20;

	void PrintData(void)
	{
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