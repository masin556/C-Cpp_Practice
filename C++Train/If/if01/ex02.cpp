#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) printf("%d\n", a);
		else printf("%d\n", c);	
	}
	else if (b > c) printf("%d\n", b);
	else printf("%d\n", c);
}

//�߰�ȣ�� ���̰� else if���� ����� �� �� �ִ�. 
//�ڵ尡 ª�� ������ �����ϴµ� �����ɸ���. 
//��쿡 ���� ������ ���� ���� �߰�ȣ ���� �� �� �ִ�. 
//�ǵ��� �߰�ȣ �ȿ� ����