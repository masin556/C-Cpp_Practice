//짝수의 갯수를 구하기

#include <stdio.h>

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) { // 만약 arr i가 짝수라면 % 2 == 0
			cnt++; // 여기에 1을 더해라 
		}
	}
	printf("%d\n", cnt);
}

/*
if의 조건이 만족할때 1씩 더해진다 
마지막에 cnt에 들어가게 될 것이다.

예를 들어 3 2 4 1 5 가 저장 되고 
해당 저장된 수에서 짝수인 것을 저장 해주는 것 
*/
