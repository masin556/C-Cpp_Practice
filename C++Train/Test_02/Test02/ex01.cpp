// ������ : + - / * % += -= ++ -- && || !
// ��� : ���ǹ� if(), switch(), �ݺ��� : while(), for()

// 1. ���� ������ �Է� �޴´� 
// 90~100 A 
// 80~89 B
// 70~79 C
// 60~69 D
// 50~59 E
// �׿� F

#include <stdio.h>
//�ε鳫��

int main() {
	int score;
	scanf("%d", &score);

	if (score > 100 || score < 0) {
		printf("�߸� �Է��ϼ̽��ϴ�\n");
	}
	else if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80) {
		printf("B\n");
	}
	else if (score >= 70) {
		printf("C\n");
	}
	else if (score >= 60) {
		printf("D\n");
	}
	else
		printf("E\n");
	}
}






//���� Ǭ���
/*int main() {
	int score;
	scanf("%d", &score);

	if (90 <= score) {
		printf("A");
	}
	else if (80 <= score) {
		printf("B");
	}
	else if (70 <= score) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else if (score >= 50) {
		printf("E");
	}
	else printf("F");
}*/