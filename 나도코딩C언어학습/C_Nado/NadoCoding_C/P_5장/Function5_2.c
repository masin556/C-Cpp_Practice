/*��Ģ����*/

#include <stdio.h>

//�Լ� ����� (��ȯ��void_ �Լ�����p_ ������_int num)
void p(int num);

int main()
{
#pragma region ��Ģ����
	//int num = 2;

	//printf("num�� %d�Դϴ�.\n", num);

	//num += 3;
	//printf("num�� %d�Դϴ�.\n", num);

	//num -= 1; 
	//printf("num�� %d�Դϴ�.\n", num);

	//num *= 3;
	//printf("num�� %d�Դϴ�.\n", num);

	//num /= 6;
	//printf("num�� %d�Դϴ�.\n", num);
#pragma endregion 2 5 4 12 2

#pragma region �Լ��� ��Ģ����5_2_2
	//int num = 2;

	//p(num);

	//num = num + 3;
	//p(num);

	//num = num - 1;
	//p(num);
	//
	//num = num * 3;
	//p(num);

	//num = num / 6;
	//p(num);
#pragma endregion

	return 0;
}


//�Լ��ۼ��� (�Լ�����)
void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}