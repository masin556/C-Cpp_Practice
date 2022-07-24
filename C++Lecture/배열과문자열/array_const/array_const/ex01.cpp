#include <iostream>
using namespace std;

int main()
{
	/*
	c++는 복합 데이터 형을 제공한다.
	>>사용자 정의 대로 새로운 데이터형을 만들 수있다.
	복합데이터형 : 기본 정수형과 부동소수점형의 조합
	*/
	// 배열 (array : 같은 데이터형의 집합)
	//typeName arrayName[arraySize]; 배열에 이름을 명시하고 배열의 사이즈 

	//배열의 초기화 

	short month[12] = { 1, 2, 3 }; //선언 

	cout << month[14]<< "\n" << endl;

	return 0;

}