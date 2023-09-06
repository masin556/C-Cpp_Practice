/*실수형*/
#include <stdio.h>

int main(void)
{
	// float 변수명 = 값f;

#pragma region 실수형변수_01
	//float f = 46.5f;
	//printf("%f\n", f);
#pragma endregion 46.500000


#pragma region 실수형변수_02
	//float f = 46.5f;
	//printf("%.2f\n", f);
#pragma endregion 46.50



#pragma region 실수형변수_03
	float f = 42.5f;
	printf("%.2f\n", f);

	double d = 4.428; // 3번째 자리에서 반올림 되어서 4.43으로 출력
	printf("%.2lf\n", d);
#pragma endregion 42.50 _ 4.43

	return 0;
}