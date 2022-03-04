// 최대 최소를 구하는 법

#include <stdio.h>

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	//int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) min = arr[i];
		//if (max < arr[i]) max = arr[i];
	}
	printf("%d\n", min);
	//printf("%d\n", max);
}

/*
예를 들어 3 1 4 1 5 의 값을 저장 되었다 치면
max에 3이 저장 되면 i 가 1~ n이 되기 직전 까지 
max랑 arr이랑 i 랑 비교를 한다
그럼 당연히 max의 값이 더 크다 
arr에서 3이 나왔었다가 1이 등장했는데 1하고 3하고 비교할때 
3이 더 크다 그럼 1이 최댓값이 될 수 없으니까 3이 나와버린다.
그다음 4를 만나면 max값은 4로 바꿔지고 

즉 arr에 나온 숫자가 max보다 크면 max에 갱신을 해주는 것이다.

그다음 1이 나오는데 1은 무시하고 5가 나오면 4랑 비교했을때 
max는 5로 갱신을 하게 된다. 
*/