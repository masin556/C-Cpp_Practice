/*영화의 상영 시간 정보를 분(minute)에서 시간 + 분으로 변환해 표시하는 프로그램을 함수로 만들어 보세요!
118분을 주었을때 %d시간 %d분 으로 출력할 수 있도록 */

#include <stdio.h>

int convert_time(int time);

int main(void)
{
	int times = 0;
	scanf_s("%d", &times);

	convert_time(times);
}

int convert_time(int time)
{
	int hours = time / 60;
	int min = time % 60;

	printf("%d시간 %d분\n", hours, min);
}