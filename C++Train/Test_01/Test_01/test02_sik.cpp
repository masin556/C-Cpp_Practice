/*
2. ü�߰� Ű�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� �����ÿ�  
= ü��(Kg , �Ǽ�) ������ Ű(m,�Ǽ�)
*/
#include <stdio.h>

int main() {
	float Bm, t;

	printf("ü���� �Է��ϼ���: ");
	scanf("%f", &Bm);

	printf("Ű�� �Է��ϼ��� : ");
	scanf("%f", &t);

	printf("ü�� : %f kg, Ű : %f m = ü���� = %f", Bm, t, Bm / (t*t));
}