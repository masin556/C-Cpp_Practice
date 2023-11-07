/*멤버 변수 초기화를 위한 생성자 함수 사용*/

#include "pch.h"


class CTest
{
public:
	//CTest 클래스의 '생성자의 함수' 선언 및 정의
	CTest() //생성자
	{
		m_nData = 10;
	}

	int m_nData;

	//멤버 함수 선언 및 정의	
	void PrintData(void)
	{
		//멤버 데이터에 접근하고 값을 출력한다.
		cout << m_nData << endl;
	}
	
};



int main()
{
	CTest t; // 생성자 호출
	t.PrintData();

	return 0;
}