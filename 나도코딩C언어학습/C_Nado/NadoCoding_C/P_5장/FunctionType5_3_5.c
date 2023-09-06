/*반환값과 전달값이 있는 함수*/

#include <stdio.h>

int apple(int total, int ate);

int main(void)
{
	int ret = 0;
	//ret = apple(5, 2);
	//printf("사과는 5개 중에서 2개를 먹으면 %d개가 남습니다\n", ret);

	printf("사과는 %d개중 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4));
	return 0;
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다\n");
	return total - ate;

}