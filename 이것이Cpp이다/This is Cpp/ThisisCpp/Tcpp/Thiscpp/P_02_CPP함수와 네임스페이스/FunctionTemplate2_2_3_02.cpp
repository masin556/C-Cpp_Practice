/*add()���� cout�� template�� ������ */
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