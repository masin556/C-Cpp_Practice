#include <iostream>
#include "Stack.h"

using namespace std;


int main()
{
	Stack* stack = new Stack();

	cout << "====== 첫번째 출력 ======" << endl;

	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);

	printf("Stack : %d\n", stack->pop());
	printf("Stack : %d\n", stack->pop());
	printf("Stack : %d\n", stack->pop());
	printf("Stack : %d\n", stack->pop());


	cout << "====== 두번째 출력 ======" << endl;
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	printf("%d\n", stack->peek());
	cout << "pop됐다\n" << endl;
	stack->pop();
	printf("%d\n", stack->peek());
	printf("isEmpty: { %d } \n", stack->isEmpty()); // 3개의 노드가 있기 때문에 false출력
	cout << "pop됐다" << endl;
	stack->pop();
	cout << "pop됐다" << endl;
	stack->pop();
	cout << "pop됐다" << endl;
	stack->pop();

	printf("isEmpty: { %d } \n", stack->isEmpty()); // 스택을 전부 제거해서 true가 출력된다.

	cout << endl;

	cout << stack->pop() << endl; // 빈스택을 pop하면 false가 뜨고 아무것도 없으니까. 범위를 벗어났다고 뜬다.

	delete stack;
	return 0;
}

