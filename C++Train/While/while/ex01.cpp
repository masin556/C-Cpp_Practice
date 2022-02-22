//0을 입력하길 기다리는 프로그램
#include<stdio.h>

int main() {
	int n;
	/*
	while (n != 0){
	
	} 만약 이런식으로 할경우 n이 정의가 안되어 있는 상태이니 갑자기 scanf를 받으면 안된다
	이렇듯 do while을 사용해서 처음에는 반드시 반복문이 실행 되지 않도록 설정해둔 변수에서 
	락을 걸어 줄 수 있게 한다. (추측) 
	*/
	do {
		printf("0을 입력하시오 : \n");
		scanf("%d", &n);
	} while (n != 0); //0아 아닐 동안 계속 반복함 

	printf("Finally!!!");
}