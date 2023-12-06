//팩토리얼
/* 1! = 0! == 1 */
#include <iostream>

using namespace std;
int fact(int n)
{
	if (n == 1 || n == 0) return 1;
	return n * fact(n - 1);
} //팩토리얼 함수

/* 팩토리얼 함수는 반복문으로 처리 가능 */
int fact1(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int fibo(int n)
{
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2);
} //피보나치 함수

int fibo1(int n)
{
	cout << "fibo : " << n << '\n';
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int n = 4;
//int n = 5;

int main()
{
	//cout << fact(n) << " " << fibo(n) << '\n';

	cout << fibo(n) << '\n';
	return 0;
}