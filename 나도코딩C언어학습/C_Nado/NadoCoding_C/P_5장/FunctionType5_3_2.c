/*��ȯ���� �ִ� �Լ�Ÿ��*/

#include <stdio.h>

int function_with_return();
void p(int num);

int main()
{
	int ret = function_with_return(); //��������� ���ÿ� ����
	//ret = function_with_return();
	
	p(ret);

	return 0;
}


int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ� �Դϴ�.\n");

	return 10;
}

void p(int num)
{
	printf("num�� %d\n", num);
}