#include <stdio.h>
/*�������� ������� �� �� 
1. �̸�
2. ����
3. ������
4. Ű
5. ���˸�
*/

int main(void)
{
	//name
	char name[256];
	printf("�ڳ� �̸��� ���� : ");
	scanf_s("%s", name, sizeof(name));

	//age
	int age;
	printf("���̴�? : ");
	scanf_s("%d", &age);

	//weight
	float weight;
	printf("�����Դ� �󸶳� ����? : ");
	scanf_s("%f", &weight);

	//height
	double height;
	printf("Ű�� ��� ����? : ");
	scanf_s("%lf", &height);

	//criminal name
	char what[256];
	printf("�� �˸��� ����! : ");
	scanf_s("%s", what, sizeof(what));

	printf(" \n ");
	//���˸� ����
	printf("=== ������ ���� ====\n");
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%.2f\n", weight);
	printf("%.2lf\n", height);
	printf("%s\n", what);

	return 0;
}