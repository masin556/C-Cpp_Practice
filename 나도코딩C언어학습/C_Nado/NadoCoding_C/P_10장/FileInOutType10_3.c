/*������ ������ ���� ������ϱ�*/
/*
fprintf(����������, "����������", ��)
���Ͽ� �����͸� �����Ѵ�. 
1. ù���� ���ް����� �����͸� ������ ����������, 
2. �ι�°�� ���� �����ڸ� ������ ���ް��� �ش� ���� �����ڿ� ��Ī�Ǵ� ���� �ִ´�. 
���������ڿ� ���� ������ ������Ѵ�. 

fscanf(����������, "����������", &������);*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000


int main(void)
{
	char str1[MAX];
	char str2[MAX];
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //��÷��ȣ ����
	int bouns = 0; //���ʽ� ��ȣ ���� �ʱ�ȭ


	FILE* file = fopen("D:\\C-Cpp_Practice\\�����ڵ�C����н�\\C_Nado\\P_10��Files\\test02.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file, "%s %d", str2, &bouns);
	printf("%s %d\n", str2, bouns);

	//fprintf()�Լ� ���
	//fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ ", 1, 2, 3, 4, 5, 6); //�ζ� ��ȣ ����
	//fprintf(file, "%s  %d\n", "���ʽ� ��ȣ ", 7);
	fclose(file);
	return 0;
}

