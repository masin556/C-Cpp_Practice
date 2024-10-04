#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue queue;

	cout << "========= enqueue() 세번 호출 =========" << endl;
	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);

	printf("%d\n", queue.front());


	cout << "========= dequeue() 네번 호출 =========" << endl;
	cout << queue.Dequeue() << endl;
	cout << queue.Dequeue() << endl;
	cout << queue.Dequeue() << endl;
	cout << queue.Dequeue() << endl;

	printf("isEmpty: { %d } \n", queue.IsEmpty()); // 큐 비어있는지 확인


	return 0;
}