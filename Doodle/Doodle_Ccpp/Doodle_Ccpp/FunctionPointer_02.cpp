#include <iostream>
using namespace std;

// 배열을 입력받고 배열에서 최소인 값을 리턴
// 배열은 그냥 포인터 이기 때문에 갯수를 따로 받아야 한다.
int ArrMin(const int arr[], int n) { 
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}


//배열에 제곱을 한 최소를 구하는 함수
int ArrSquareMin(const int arr[], int n) 
{
	int min = arr[0] * arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] * arr[i] < min)
		{
			min = arr[i] * arr[i];
		}
	}
	return min;
}


int main()
{ 
	int arr[7] = {3, 1, -4, 1, 5, 9, 2};
    cout << ArrMin(arr, 7) << endl;
    cout << ArrSquareMin(arr, 7) << endl;
}