/*생성자 함수 역할 */

#include "pch.h"

//제작자
class CTest
{
public:
	//CTest 클래스 의 생성자 함수 선언 및 정의
	CTest()
	{
		//인스턴스가 생성되면 멤버 데이터를 '자동'으로 초기화한다. 
		cout << "CTest() : 생성자 함수" << endl;
		m_nData = 10;
	}

	//멤버 데이터 선언
	int m_nData;

	// 멤버 함수 선언 및 정의
	void PrintData(void)
	{
		//멤버 데이터에 접근하고 값을 출력한다
		cout << m_nData << endl;
	}

};

//사용자 코드

int main()
{
	cout << "main함수 시작 " << endl;

	CTest t;
	t.PrintData();

	cout << "main 함수 끝" << endl;


	return 0;
}