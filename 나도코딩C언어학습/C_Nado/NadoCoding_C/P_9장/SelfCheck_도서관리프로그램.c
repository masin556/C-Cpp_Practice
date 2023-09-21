/*���� ���� ���α׷�
1. ������ ���� ������ ��� ����ü�� �����մϴ�. �� ������ ��ȣ(ID), ����, ���Ⱑ�ɿ���(0: ������, 1:���� ����)������ ������.
2. ����ü �迭�� �̿��� ���ÿ� ���� ���� 4���� �����Ѵ�. �� ������ ��ȣ�� ������� 1,2,3,4�̴�.
���� : C�Թ���, ���̽� �⺻��, �ڹ� �⺻��, ���̽� �߱���
3. ��ü ���� ������ ���
4. ����ڷκ��� ���� ��ȣ�� �Է¹޴´�.
5. �ش� ������ ���� ���� ���̸� �ݳ�, ���� ������ ���¸� ����� ó��
6. ����ڷκ��� -1�� �Է� ���� �� ���� 3~5�ܰ踦 �ݺ��Ѵ�. ����ڰ� -1�� �Է��ϸ� ���α׷� ����
*/

#include <stdio.h>

struct book {
	int id; //��ȣ 
	char* title; //å �̸�
	int available; // ���� ��Ȳ
};

void print_books(struct book* books);

void print_BookList();

int main(void)
{
	int input; //����� �Է��� ������ ����

	struct book books[4] = {
		{ 1, "C�Թ���", 1 },
		{ 2, "���̽� �⺻��", 1},
		{ 3, "�ڹ� �⺻��", 1},
		{ 4, "���̽� �߱���", 1}
	};

	while (1)
	{
		print_books(books); //��ü ���� ���
		printf("����/�ݳ��� å ��ȣ�� �Է��ϼ���.(���� : -1) : ");
		scanf_s("%d", &input);

		if (input == -1) {
			printf("���α׷��� �����մϴ�.\n\n");
			break;
		}
		if (input < 1 || input > 4) {
			printf("�� �� �� �Է��Դϴ�.Asshole");
			continue;
		}
		input -= 1;
		if (books[input].available == 0)
		{
			printf("'%s' �ݳ��� �Ϸ�ƽ��ϴ�.\n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			//���� ���ɵ���
			printf("'%s' ������ �Ϸ�ƽ��ϴ�.\n\n", books[input].title);
			books[input].available = 0; 
		}

	}
	return 0;
}


//��ü ���� ���� ���, books �迭�� ����ü �����ͷ� ó��
void print_books(struct book* books)
{
	char* available = "���� ����";
	char* unavailable = "���� ��";

	printf("��ü ���� ����Դϴ�.\n");
	printf("==========================================\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. %-16s ", books[i].id, books[i].title);
		//���⿩�� ���
		if (books[i].available)
		{
			printf("[%s]\n", available);
		}
		else
		{
			printf("[%s]\n", unavailable);
		}
	}
	printf("======================================\n");
}

