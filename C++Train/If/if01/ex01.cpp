//��ø if ��
//�߰�ȣ �ڵ� ��Ÿ�� 

#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	//if ��ø�� ������� 2���� if���� ������ �ؾ� �������� ����.
	if (a > b) {
		//a > b > c
		// a > c > b
		// c > a > b
		if (a > c) {//��ó�� 2��°if���� �����ؾ� ��if�� �ȿ� ����. 
			printf("%d\n", a);
		}
		else { //c > a
			printf("%d\n", c);
		}
	}
	else {// b>a
		if (b > c) {
			printf("%d\n", b);
		}
		else { //c > b
			printf("%d\n", c);
		}
	}
}
