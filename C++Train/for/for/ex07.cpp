#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, sum;
	for (i = 1, sum = 0; i <= n; sum += i, i++); //�߰�ȣ�� ���� �ʰ� ����� �����ϴ�

	printf("%d\n", sum);
}// �Է°��� ���ϸ� ��� �Ǵ°�. ? 