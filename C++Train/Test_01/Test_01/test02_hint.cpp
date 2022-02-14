#include <stdio.h>

int main() {
	float weight;
	float height;

	printf("체중입력(kg) : ");
	scanf("%f", &weight);
	printf("키 입력(m) : ");
	scanf("%f", &height);

	//t의 제곱 = t*t
	float bmi = weight / (height * height);

	printf("BMI : %f\n", bmi);
}

//입력은 
// 체중 : 그대로 70kg 
// 키 : 1.7 1.5 이런식 