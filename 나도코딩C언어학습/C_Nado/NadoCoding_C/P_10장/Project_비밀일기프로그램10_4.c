/*��� �ϱ� ���α׷� �����
���α׷������� ó�� ���� �� ��й�ȣ�� �����Ѵ�. ���� ���α׷��� ������ �� �Է��� ��й�ȣ�� ������ ��й�ȣ�� ���մϴ�.
��й�ȣ�� ������ �ϱ��� ������ ������ ���� �ۼ��� �� ������ �� �ִ� ��� ��ȣ�� Ʋ���� ��� �޽����� ����� �� �����Ѵ�.
���⼭ ���� �б�� ����� fputs()�� fgets()�Լ��� �̿��Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS //fopne �Լ��� ���Ȱ��
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 10000

int main()
{
	char password[20];
	char c; // �Է¹��� ��й�ȣ Ȯ�ο�(����ŷ ȿ��)
	int i = 0; // �� �ھ� �Է¹ޱ� * password �ε����� ����
	char line[MAX]; //-- ���� �о�� ���� ����
	char contents[MAX] = ""; // -- �ϱ��� ���� ������ ����(�� ������ �ʱ�ȭ)

	printf("��� �ϱ⿡ ���� ���� ȯ���Ͽ�!\n");
	printf("��� ��ȣ�� �Է��ϼ���(�ִ� 20�ڸ�) : ");

	while (1)
	{ // -- ��й�ȣ �Է¹ޱ�
		c = _getch();
		if (c == 13) // -- Enter-> ��� ��ȣ �Է� ���� 13(ASCII) == Enter
		{
			password[i] = '\0';
			break;
		}
		else // --- ��� ��ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++; // �迭 �ε��� ����
	}
	printf("\n\n=== ��й�ȣ Ȯ�� �� ===\n\n");

	// ������ ��й�ȣ ����
	if (strcmp(password, "skehzheld") == 0)
	{
		printf("\n\n=== ��� ��ȣ Ȯ�� �Ϸ� ===\n\n");
		char* fileName = "D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\secretdiary.txt"; //���ϸ��� ������ ������ ����

		//a+ ���� ������ ������ ����, ������ ������ �ڿ��� ���� �����߰�
		FILE* file = fopen(fileName, "a+b"); //���� ������ ���
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}


		while (fgets(line, MAX, file) != NULL) { //-- fgets()�Լ��� ���� �о����
			printf("%s", line); //-- ���Ͽ��� �о� �� ���� ���
		}

		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT�� �Է��ϼ���!\n\n");
		while (1) {
			scanf("%[^\n]", &contents); //-- �� �ٲ� ����(\n) ������ �� ���徿 �о����
			getchar(); //-enter�Է��� �ٹٲ� ���� �÷��� ó��

			if (strcmp(contents, "EXIT") == 0 || strcmp(contents, "exit") == 0)
			{
				printf("/n ��� �ϱ⸦ �����մϴ�.\n");
				break; //�ϱ� ���� ����
			}
				fputs(contents, file); //�Է��� ���� ���� ����
				fputs("\n", file); //-- �� �ٲ� ���ڸ� ���Ͽ� �߰�
		}
		fclose(file); //���� �ݱ�
	}
	else
	{
		printf("=== ��й�ȣ�� Ʋ�Ⱦ��, ===\n\n");
	}
	return 0;
}