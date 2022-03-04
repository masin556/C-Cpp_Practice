// 입력박은 숫자들을 거꾸로 출력

#include<stdio.h>

int main() {
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);

	//이런식으로 배열에 있는 것을 입력 받을 수 있다. 
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	//거꾸로 출력을 받는다.  3 1 4 1 5 가 들어왔다면 arr에 4 가 들어오면 4 3 2 1 0 하면서 끝나게 된다.
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}