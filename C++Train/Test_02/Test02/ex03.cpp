//369����  ���� �ڸ����� 3�� ����� ��� *�� ����ض� 
//1 2 * 4 5 * 7 8 * ~~~~~~~~~~~~~

#include <stdio.h>
//�ε�
int main() {
	int n; 
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
}



//���� ����� 
/*
int main() {
	for (int i = 1; i <= 100; i++) {

		if (i % 3 == 0) {
			printf("*, ");
		}
		else printf("%d, ", i);
	}
}*/