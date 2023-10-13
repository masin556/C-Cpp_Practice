/*add()변형 cout을 template로 간단히 */
#include "pch.h"

template <typename T>
T Add(T a, T b)
{
	return a * b;
}

int main()
{
	cout << Add<int>(3, 4) << endl;
	cout << Add<float>(3.3, 4.4) << endl;

	return 0;
}