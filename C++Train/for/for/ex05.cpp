#include <stdio.h>

int main() {
	//1번째 무한루프 
	/*for (int i = 1; true; i++) {
		printf("%d", i);
	}*/

	//2번째 방법
	/*int i; 
	
	scanf("%d", &i);

	for (; true; i++) {
		printf("%d", i);
	}*/

	//3번째 방법 
	//int i;

	//scanf("%d", &i);

	//for (; ; i++ ) { //조건이 생략되면 그 부분 이 true라고 간주된다
	//	printf("%d", i);
	//	
	//}

	//4번째 조건제외
	for (int i = 1;  ; i++) {
		printf("%d", i);
	}
}