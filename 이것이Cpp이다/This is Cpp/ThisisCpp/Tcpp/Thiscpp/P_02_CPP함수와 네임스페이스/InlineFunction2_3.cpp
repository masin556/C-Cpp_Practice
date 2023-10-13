/*인라인 함수
함수 호출시 스택메모리 증가, 매개변수로 인한 메모리 복사등이 일어나 내부적으로
속도면에서 좋지 않다. - 이 문제를 "함수 호출로인한 오버헤드"라 불리는데 이를 극복하고자 매크로를 사용한다.

길이가 짧고 단순하며 관리 상의 목적 때문에 함수로 만들어진 코드를 매크로로 변환할 경우 성능 수준 향상을 기대할 수 있다.

그런데 매크로는 매개변수 지정도 안되며, 함수가 아니여서 논리적 오류를 발생할 수 있다.
그래서 인라인 함수를 사용할 수 있다.

인라인 함수 : 매크로의 장점과 함수의 장점을 갖춘 함수
매개변수 지정이 하고 매크로의 단점을 보완해준다.
함수 원형앞에 inline이라는 예약어만 작성하면 된다.
내부적으로 매크로처럼 함수 호출을 하지 않는다. */


#include "pch.h"

#define ADD(a, b)((a) + (b))

int Add(int a, int b)
{
	return a + b;
}

inline int AddNew(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << "ADD() : " << ADD(a, b) << endl;
	cout << "Add() : " << Add(a, b) << endl;
	cout << "AddNew() : " << AddNew(a, b) << endl;


	return 0;
}