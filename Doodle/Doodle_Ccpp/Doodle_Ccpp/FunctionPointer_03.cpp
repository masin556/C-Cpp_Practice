#include <iostream>
using namespace std;


int Square(int x) { return x * x; } //제곱
int MyFunc(int x) { return x * (x - 15) / 2; } // 임의의 함수
int Cube(int x) { return x * x * x; } // 3제곱

/* f는 어떠한 int를 받는 가리키는 포인터 */
    //int 1개를 매개변수로 받은 역참조포인터 f
int ArrFnMin(const int arr[], int n, int (*f)(int)) // 함수에 임의의 함수를 가리키는 포인터를 받아서호출이 가능하다.
{
	/*arr의 각 원소들에 f를 적용한 결과값*/
	int min = f(arr[0]);

	for (int i = 1; i < n; i++)
	{
		if (f(arr[i]) < min)
		{
           min = f(arr[i]);
		}
	}
}



int main()
{
	int arr[7] = {3, 1, -4, 1, 5, 9, -2};

	cout << ArrFnMin(arr, 7, Square) << endl;
    cout << ArrFnMin(arr, 7, MyFunc) << endl;
    cout << ArrFnMin(arr, 7, Cube) << endl;
}

/*이렇게 임의의 함수를 만들고 함수 포인터를 만들어서 임의의 값을 받을 수 있다는 것
	함수 포인터를 사용하는이유
	어떠한 함수든지 매개변수 타입, 리턴 타입이 일치한다면
	어떤 함수든지 다 가리킬 수 있기에
	리턴 타입이 다르면 안된다.

	함수포인터에서 왜 타입이 중요한지 알 수 있다.
	결국 리턴 타입이 일치 할때만 할 수 있다는 단점이 있다.

	또 결국 템플릿을 사용해서 단점을 보완 할 수도 있을 것이다.

*/