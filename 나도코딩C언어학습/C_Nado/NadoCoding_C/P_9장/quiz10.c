/*�������� �¹����� �� ȣ���� �̵��ϴ� ���� */

#include <stdio.h>

struct Train {
	int no;
	struct Train* next;
};

int main()
{
	struct Train train1 = { 1 };
	struct Train train2 = { 2 };
	struct Train train3 = { 3 };

	train1.next = &train2;  // 2
	train2.next = &train3;  // 3

	struct Train* cursor = &train1; // 1 //�¹��� ��ġ
	printf("%dȣ��\n", cursor->next->next->no);

	/*cursor�� train1�� �����Ͽ� 1 -> train1�� 2�� �����Ͽ� 2 train2�� 3�� �����ϰ� �־ 
	����� 3ȣ���� ��µȴ�. */
	return 0;
}