#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
#pragma region ���� ���� �� switch
	//int i = 1;

	//switch (i)
	//{
	//case 0:
	//	printf("����\n");
	//	break;
	//case 1:
	//	printf("����\n");
	//	break;
	//case 2:
	//	printf("��\n");
	//	break;

	//default:
	//	printf("���� �� �𸣿�!\n");
	//}
#pragma endregion  ������ ����

#pragma region 4.4.3
	int age = 14;
		
	switch (age) {
	//���� ���о��� 
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("�ʵ��л��Դϴ�.\n");
		break; // 8�� �����ϸ� 9 10 11 12 13�� ������ break�� ���Եȴ�. 
	case 14:
	case 15:
	case 16:
		printf("���л��Դϴ�\n");
		break;
	case 17:
	case 18:
	case 19:
		printf("����л��Դϴ�\n");
		break;
		
	default:
		printf("û�ҳ��� �ƴմϴ�\n");
	}
#pragma endregion
	return 0;
}