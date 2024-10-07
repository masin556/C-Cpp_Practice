#include <iostream>
using namespace std;

int factorial(int num)
{
	if (num == 1 || num == 0) // 만약 num 의 값이 1이나 0일때 0! 은 1이기 때문에
	{
		cout << num << '!';
		return 1;
	}
	else
	{
		// factorial 재귀 함수
		cout << num << '!' << " * ";
		return num * factorial(num - 1);;// num 의 n 값이 들어올때 해당 값을 곱하여 다시 factorial 함수를 호출해 값을 줄여가며 곱해준다.
	}
}
int main()
{
	cout << " = " << factorial(5) << endl;
	return 0;
}