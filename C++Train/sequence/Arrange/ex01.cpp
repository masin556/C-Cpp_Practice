// �Է¹��� ���ڵ��� �Ųٷ� ���

#include<stdio.h>

int main() {
	int n;
	int arr[1000];

	printf("�Է��� ������ ���� �Է� : ");
	scanf("%d", &n);

	//�̷������� �迭�� �ִ� ���� �Է� ���� �� �ִ�. 
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	//�Ųٷ� ����� �޴´�.  3 1 4 1 5 �� ���Դٸ� arr�� 4 �� ������ 4 3 2 1 0 �ϸ鼭 ������ �ȴ�.
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}