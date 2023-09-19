/*기차에서 승무원이 각 호차를 이동하는 과정 */

#include <stdio.h>

struct Train {
	int no;
	struct Train* next;
};

int main()
{
	struct Train train1 = { 1 };
	struct Train train2 = { 2 };
	struct Train train3 = { 3 };

	train1.next = &train2;  // 2
	train2.next = &train3;  // 3

	struct Train* cursor = &train1; // 1 //승무원 위치
	printf("%d호차\n", cursor->next->next->no);

	/*cursor가 train1을 참조하여 1 -> train1이 2를 참조하여 2 train2가 3을 참조하고 있어서 
	출력은 3호선이 출력된다. */
	return 0;
}