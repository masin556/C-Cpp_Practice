#include <stdio.h>


/*변수는 그릇을 생각하면 해당 데이터형을 담는 그릇? 
모양이라고 생각하면 될듯 , 
8bit = 1byte
32bit = 4byte
int : 정수형 32bit(4byte) (그릇의 크기) 
*/
int main()
{
	int a; // 1) a라는 int형 그릇 (선언) 
	a = 3; // 2) a 에다 3을 집어넣는다(대입)
	printf("%d\n", a); // 3) a 값을 불러와서 %d에 넣는다 3이 들어왔다

	a = 5; // 4) a 그릇에 3을 빼버리고 5를 대입한다.
	printf("%d\n", a); // 5) %d에 5가 출력 
}