/*���ڿ� �ٷ��*/

//���� : char  ���������� : %c
//���ڿ� : 


#include <stdio.h>



int main()
{
#pragma region ���� ���
	char c = 'A';
	printf("%c\n", c);

#pragma endregion

	printf("\n\n");

#pragma region �迭�� ���ڿ�����
	//char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	//printf("%s\n", str);

#pragma endregion

#pragma region �迭�� ���ڿ�����
	//char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str)); // �迭�� ����� �� �� �ִ�.

#pragma endregion

#pragma region �迭�� for�� size
	char str[7] = "coding"; // == [c][o][d][i][n][g][\0]
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}
#pragma endregion

	printf("--------------------\n\n");

#pragma region �迭���ѱ������ϱ�6_4_2
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));

#pragma endregion
	printf("--------------------\n\n");

	char str2[] = "Practice makes perfect"; //�� �����ϳ��� ���� 23��
	printf("%d\n", (int)sizeof(str2));

	return 0;
}