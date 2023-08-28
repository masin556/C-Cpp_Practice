#include <stdio.h>
/*변수 f에 값 2121.1020을 넣어 선언한 후, f의 값을 출력하는 코드이다. 결괏값을 소수점 이하
셋째 자리까지만 출력한다고 할때 printf에 들어가야할 값*/

int main(void)
{
	float f = 2121.1020f;
	printf("%.3f\n", f);

	return 0;
}