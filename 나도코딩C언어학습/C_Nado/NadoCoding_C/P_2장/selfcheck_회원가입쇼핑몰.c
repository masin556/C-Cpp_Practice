/*�Ź� ���θ� ȸ������*/
/*����Ǿ���� ����
1. �̸�
2. ���̵�
3. ����
4. ����
5. �Ź�ũ��*/
#include <stdio.h>

int main(void)
{
	char name[256];
	char id[256];
	int age;
	char birth[256];
	int footsize;

	printf("ȸ�� �̸��� �Է����ּ��� : ");
	scanf_s("%s", name, sizeof(name));

	printf(" ȸ�� ID�� �������ּ��� : ");
	scanf_s("%s", id, sizeof(id));

	printf(" ���̸� �Է��� �ּ��� : ");
	scanf_s("%d", &age);

	printf(" ������ �Է����ּ��� : ");
	scanf_s("%s", birth, sizeof(birth));

	printf(" �Ź߻���� ��� �ǽó���? : ");
	scanf_s("%d", &footsize);

	printf("\n");

	printf("==== ȸ�� ���� ====\n");
	printf("�̸� : %s\n", name);
	printf("ID : %s\n", id);
	printf("���� : %d\n", age);
	printf("���� : %s\n", birth);
	printf("�Ź� ������ : %d\n", footsize);

	return 0;
}