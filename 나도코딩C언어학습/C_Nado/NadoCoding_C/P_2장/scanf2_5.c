/*scanf() �Է¹ޱ�*/
#include <stdio.h>

int main(void)
{
#pragma region scanf()_01
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	printf("�Է°� : %d\n", input);*/

#pragma endregion ���Է�


#pragma region scanf()_02
	/*int one, two, three;
	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

#pragma endregion
	

#pragma region scanfchar
	char c = 'A';
	printf("%c\n", c);
	
	char str[256];
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str)); // ������ ��� 
	printf("%s\n", str);


#pragma endregion
	return 0;
}

/*str[] sizeof unsigned error
= sizeof �����ڷ� �˾Ƴ� ���� ũ�⿡ �ش��ϴ� ���� ���°� ����� �Ͱ� �ٸ��ٴ� 
������ �ִ�. 

1. scanf_s("%s\n", str, (unsigned int) sizeof(str)); // ����ȯ
2. scnaf_s("%s\n", str, 256); //������ ���� ũ�� ���� �Է�
*/