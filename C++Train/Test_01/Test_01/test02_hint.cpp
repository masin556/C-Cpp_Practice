#include <stdio.h>

int main() {
	float weight;
	float height;

	printf("ü���Է�(kg) : ");
	scanf("%f", &weight);
	printf("Ű �Է�(m) : ");
	scanf("%f", &height);

	//t�� ���� = t*t
	float bmi = weight / (height * height);

	printf("BMI : %f\n", bmi);
}

//�Է��� 
// ü�� : �״�� 70kg 
// Ű : 1.7 1.5 �̷��� 