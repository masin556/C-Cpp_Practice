/*�Ǽ���*/
#include <stdio.h>

int main(void)
{
	// float ������ = ��f;

#pragma region �Ǽ�������_01
	//float f = 46.5f;
	//printf("%f\n", f);
#pragma endregion 46.500000


#pragma region �Ǽ�������_02
	//float f = 46.5f;
	//printf("%.2f\n", f);
#pragma endregion 46.50



#pragma region �Ǽ�������_03
	float f = 42.5f;
	printf("%.2f\n", f);

	double d = 4.428; // 3��° �ڸ����� �ݿø� �Ǿ 4.43���� ���
	printf("%.2lf\n", d);
#pragma endregion 42.50 _ 4.43

	return 0;
}