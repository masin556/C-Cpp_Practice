/*�����ͷ� �迭�ٷ��*/

#include <stdio.h>

int main()
{
#pragma region �����ͷι迭�������ϱ�(7.3.1)
	int arr[3] = { 5, 10, 15 };
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}
	
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("������ ���� ptr[%d]�� �� : %d\n", i, ptr[i]);
	}

	//������ ������ �� �Է� 
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	////
	//������ ������ ���� �ٲٸ� ������ ������ ����Ű�� �迭�� ���� �ٲ��. 
	////
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� �� : %d \n", i, *(arr + i)); //arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("�迭 ptr[%d]�� �� : %d \n", i, *(ptr + i)); //ptr[i]);
	}

	printf("arr��ü�� �� : %p\n", arr);
	printf("arr[0]�� �ּ� : %p\n", &arr[0]);

	printf("arr��ü �� ���� �ּ��� ���� �� : %d\n", *arr);
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);


#pragma endregion

	return 0;
}
