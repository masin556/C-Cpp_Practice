#include <stdio.h>
//다른 방식

int main() {
	int array[] = { 3, 1, 4, 1, 5, 9, 4, 1, 4 }; //배열에 순차적으로 들어감

	for (int i = 0; i < sizeof(array) / sizeof(int); i++){
	//for (int i = 0; i <= 9; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

/*
int a;
printf("%d\n", sizeof(a)); //배열에서 사용하게 되면
*/