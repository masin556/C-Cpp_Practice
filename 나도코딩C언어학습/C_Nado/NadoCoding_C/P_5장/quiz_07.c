#include <stdio.h>

//�Լ����� ���� ���� ���� �߻� 
void my_func(int i); //ȣ���μ��� ���� ����
void my_func(int i, int j);
void my_func(int i, int j, int k);  // �Լ��� �̹� �������� 

int main(void)
{
	my_func(3, 5);

	return 0;
}


void my_func(int i)
{
	printf("ù��°\n");
}

void my_func(int i, int j)
{
	printf("�ι�°\n");
}

void my_func(int i, int j, int k)
{
	printf("����°\n");
}