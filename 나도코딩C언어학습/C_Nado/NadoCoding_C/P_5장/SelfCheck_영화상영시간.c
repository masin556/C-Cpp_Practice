/*��ȭ�� �� �ð� ������ ��(minute)���� �ð� + ������ ��ȯ�� ǥ���ϴ� ���α׷��� �Լ��� ����� ������!
118���� �־����� %d�ð� %d�� ���� ����� �� �ֵ��� */

#include <stdio.h>

int convert_time(int time);

int main(void)
{
	int times = 0;
	scanf_s("%d", &times);

	convert_time(times);
}

int convert_time(int time)
{
	int hours = time / 60;
	int min = time % 60;

	printf("%d�ð� %d��\n", hours, min);
}