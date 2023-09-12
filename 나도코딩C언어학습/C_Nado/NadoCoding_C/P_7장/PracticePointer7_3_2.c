/*�ǽ�1 : �����ͷ� �� ������ �� ��ȯ�ϱ�*/
#include <stdio.h>

//������ ���� -> ���� ��ȯ 
void swap(int a, int b);

//���� �ּҸ� ���� 
void swap_addr(int* a, int* b);

int main()
{
	int a = 10;
	int b = 20; 
	printf("a�� �ּ� : %p\n", &a);
	printf("b�� �ּ� : %p\n", &b);

	printf("swap() �Լ� ȣ�� �� => a : %d, b :%d\n", a, b);
	
	swap(a, b);
	printf("swap() �Լ� ȣ�� �� => a : %d, b :%d\n", a, b);

	printf("\n swap_addr() �Լ� ȣ�� �� => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b); // �Լ�ȣ��, �ּ� ����
	printf("\n swap_addr() �Լ� ȣ�� �� => a : %d, b : %d\n", a, b);
	
	//�Լ� Ȯ�� 
	return 0;
}

void swap(int a, int b)
{
	printf("swap()�Լ��ȿ��� a �ּ� : % p\n", &a);
	printf("swap()�Լ��ȿ��� b�� �ּ� : %p\n", &b);
	int temp = a; 
	a = b; 
	b = temp;
	printf("swap() �Լ� �� => a : %d, b :%d\n", a, b);
}

void swap_addr(int* a, int* b)
{
	printf("swap_addr()�Լ��ȿ��� a�� �ּ� : %p\n", a);
	printf("swap_addr()�Լ��ȿ��� b�� �ּ� : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr()�Լ� �� => a : %d, b : %d\n", *a, *b);
	//--- a�� b�� ��� �ּ��� ���� �� ���
}