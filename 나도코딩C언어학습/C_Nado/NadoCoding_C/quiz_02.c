/* ���ڿ� 2���� �Է¹޾� ����ϴ� �ڵ� */

#include <stdio.h>

int main(void)
{
	char str1[256];
	char str2[256];

	printf ("���ڿ��� �Է��ϼ���! : ");
	scanf_s ("%s", str1, 256);
	printf ("2��° ���ڿ��� �Է��ϼ���! : ");
	scanf_s ("%s", str2, (unsigned int) sizeof(str2));

	printf ("%s\n", str1);
	printf ("%s\n", str2);
}