#include <iostream>
using namespace std;

// 함수포인터로 불러올 값 셋팅
bool Compare(int a, int b) 
{ 
	return a == b; // 매개변수가 들어온 값을 판단한다 같다면 true 아니면 false
}

int main() 
{ 
	// bool (*fp)(int, int) = Compare;
	bool (*fp)(int, int); // 매개변수 2개를 받아 bool 값을 리턴받고 함수를 가리키는 포인터 이자 역참조 포인터이다. (*) 괄호 안에 포인터
    fp = &Compare; // or Compare 만 &가 없어도 된다. / 역참조 한 fp 포인터는 Compare 주소값을 받아온다.
	// fp = Compare;
    
	bool result = (*fp)(2, 3); // 리턴 받은 값을 담을 변수 (*fp)를 안쓰고 fp 만 써도 된다.

	cout << result << endl;

	// int arr[3];
	// int {*ap)[3] = &arr;
    return 0;
}