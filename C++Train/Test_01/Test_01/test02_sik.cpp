/*
2. 체중과 키를 입력받아서 체질량 지수를 구하는 프로그램을 만들어보시오  
= 체중(Kg , 실수) 나누기 키(m,실수)
*/
#include <stdio.h>

int main() {
	float Bm, t;

	printf("체충을 입력하세요: ");
	scanf("%f", &Bm);

	printf("키를 입력하세요 : ");
	scanf("%f", &t);

	printf("체중 : %f kg, 키 : %f m = 체질량 = %f", Bm, t, Bm / (t*t));
}