/*���ڿ� ������ ���� ������ϱ�
������ �а� ���� fputs(), fgets()  | fprintf(), fscanf() �Լ����� �ִ�.
�� �Լ����� ������ ��������� ���� �� �ִ�.
*/


/*���Ͽ��� �����͸� �а� �� ���� ���� fopne()�Լ��� ��� ���� �����͸� �����Ѵ�.
1. ���������� ��������
2. ������ ������ �о�����
3. ������ ���� �����ߴ��� ���� ������ ����
���� : FILE * �����͸� = fopen(���ϸ�, ���ϸ��);
���Ͽ��� ��� :
r : �б����� // r+
w : ���� ���� // w+
a : �̾��  // a+
�б� ����� �������� ��
t : �ؽ�Ʈ (���)
b : ���̳ʸ� ������(��ǻ��)*/

#define _CRT_SECURE_NO_WARNINGS //fopen�Լ� ���� �ٸ� ȯ�濡�� fopen_s�� Ȱ���� �ȵ�
#include <stdio.h>

//MAX�� ���� 10000���� ġȯ�ȴ�. 
#define MAX 10000

int main()
{
	char line[MAX];
#pragma region
	//FILE* file;
	//errno_t err = fopen_s(&file, "D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\test01.txt", "wb");
	//FILE* file = fopen("D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\test02.txt", "wb");
	FILE* file = fopen("D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\test01.txt", "rb");
	//if (err != 0)
	if(file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	//fputs(���ڿ�, ����������) = 1, ���Ͽ� ����� ����, 2. ����������
	fputs("fput() �Լ��� ���� �� ���Կ�\n", file);
	fputs("�� �������� Ȯ��!\n", file);

#pragma endregion
	//���Ͽ��� ���ڿ��� �о�´�. fgets(������, ���ڿ��ִ�ũ��, ����������) 

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	//fopen()���� ������ �����ٸ� �ݵ�� fclose()�� �ݾ�����Ѵ�. 
	fclose(file);
	

	return 0;
}