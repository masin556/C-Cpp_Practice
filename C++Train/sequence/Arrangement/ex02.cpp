#include <stdio.h>
//�ٸ� ���

int main() {
	int array[] = { 3, 1, 4, 1, 5, 9, 4, 1, 4 }; //�迭�� ���������� ��

	for (int i = 0; i < sizeof(array) / sizeof(int); i++){
	//for (int i = 0; i <= 9; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

/*
int a;
printf("%d\n", sizeof(a)); //�迭���� ����ϰ� �Ǹ�
*/