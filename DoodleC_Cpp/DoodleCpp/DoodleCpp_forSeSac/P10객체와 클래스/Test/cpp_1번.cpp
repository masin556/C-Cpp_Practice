/* 출력 결과 예측*/

#include "../../help.h"


int n = 0;
namespace A
{
	int n = 0; 
	void nameA()
	{
		cout << "namespace A" << endl;
	}

	namespace B {
		void set() { 
			cout << "namespace A::B.Set()" << endl;
			n = 10; }
		int n = 0;
	}

}

namespace C
{
	void set(); //선언
	int n = 0;2ㄷㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}

void C::set() { 
	n = 20;
	cout << "void C::set()의 전역" << endl;
}

int main()
{
	using namespace A::B;

	set();
	C::set();

	cout << ::n << endl;
	cout << A::n << endl;
	cout << A::B::n << endl;
	cout << C::n << endl;

	return 0;
}