/*어느 학생이 치른 시험의 총점과 평균을 구하는 프로그램을 배열로 만들어 보세요!
조건
1. 배열에는 5과목의 시험 성적이 주어지며 범위는 0 ~ 100 사이의 정수입니다.
2. 총점은 정수로, 평균은 실수로 표현하되 소수점 이하 첫째 자리까지 출력합니다.
힌트
1. 총점은 5과목의 시험 점수를 모두 더한 값
2. 평균은 총점을 전체 데이터에 수인 5로 나눈 값입니다.
3. 나눗셈의 결과로 실수를 얻으려면 정수 5가 아닌 실수 5.0f 로 나누면 된다. 또는
7장에서 배울 형변환 이용해 (float)5와 같이 5를 실수형으로 변환한 후 나누는 방법도 있다.
4. 소수점 이하 첫째 자리까지 출력하려면 서식 지정자를 %.1f로 입력하면 된다.*/

#include <stdio.h>

void Average(int * avg);

int main()
{
	int yourScores[5] = { 0, 0, 0, 0, 0 };
	int a, b;
	for (int i = 0; i < 5; i++)
	{
		printf("점수를 입력해주세요 : ");
		scanf_s("%d", &yourScores[i]);
	}

	Average(yourScores);

	return 0;
}


void Average(int* avg)
{
	int Score = 0; //총점
	float aver = 0; //평균
	for (int i = 0; i < 5; i++)
	{
		Score += avg[i];
		aver =  (float)Score / 5.0f;
	}

	printf("총점은 % d, 평균은 %.1f \n", Score, aver);

}