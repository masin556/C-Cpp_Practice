// �� ������, �� ������ Compare and logic

#include <stdio.h>

int main() {
	int a, b;

	printf("ù��° ���� �Է��Ͻÿ�");
	scanf("%d", &a);
	printf("�ι�° ���� �Է��Ͻÿ�");
	scanf("%d", &b); 

	//C���� �����ϴ� ���� �ϳ�
	// bool : �������� ����� ���� (�� ���� 2������ ����) (1byte= 8bit �� ��) 
	//�׷���int ���� bool ���
	bool p = a > b;
	bool q = a < b;
	bool r = a == b; // == ���� �񱳿����� 

	printf("%d = %d > %d\n", p, a, b);
	printf("%d = %d < %d\n", q, a, b);
	printf("%d = %d == %d\n", r, a, b);
	// 2 > 3 = ���� 
	// �� : 1 , ���� : 0 P�� ������ ���°� 

}

// a >= b : a�� b���� ũ�ų� ���� 
// a <= b : a�� b���� �۰ų� ����
// a != b : a�� b�� �ƴϴ�