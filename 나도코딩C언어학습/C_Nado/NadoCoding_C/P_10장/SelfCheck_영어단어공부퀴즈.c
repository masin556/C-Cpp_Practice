/*���� �ܾ� ���θ� ���� ���� ���α׷�
1. �޸������ο��� ������ ���� ���� �ܾ�� ���� ����� ������ �Է��Ѵ�.
book å 
price ����
window â��

2. �޴� > �ٸ� �̸����� txt�������� > ���ڵ�(ANSI�� ���� C ���α׷����� �ѱ��� ������ �ʵ�����)
3. ������ �о�ͼ� ������� �ϳ��� ���� ���� �� �ڿ� ����ڷ� ���� ���� �ܾ 
�Է¹޾� ���� ���θ� ����ϰ� ���� �ܾ�� �Ѿ��. �ݺ��� �� 3ȸ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char word[256] = ""; //�ܾ�
	char definition[256] = ""; //��
	char input[256] = ""; //����� �Է�

	FILE* file = fopen("D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\Word.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	
	for (int i = 0; i < 3; i++) {
		(void)fscanf(file, "%s %s", word, definition);
		printf("'%s'(��)��� ���� ���� ���� �ܾ��? ", definition);
		scanf_s("%s", input, (unsigned int)sizeof(input));
		
		if (strcmp(input, word) == 0)
		{
			printf("%s, ���� �Դϴ�.\n\n", word);
		}
		else
		{
			printf("Ʋ�Ƚ��ϴ�. ������ %s �Դϴ�. \n\n", word);
		}
	}
	fclose(file);

	return 0;
}