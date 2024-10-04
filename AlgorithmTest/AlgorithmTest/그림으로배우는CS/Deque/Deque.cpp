#include <iostream>
#include "Deque.h"
using namespace std;


int main()
{
	Deque* deque = new Deque();

	cout << "===== addFirst =====" << endl;
	cout << "비었는가? : " << deque->isEmpty() << endl;
	deque->addFirst(1);
	deque->addFirst(2);
	deque->addFirst(3);
	deque->addFirst(4);
	deque->addFirst(5);

	deque->PrintAll();
	cout << "비었는가? : " << deque->isEmpty() << endl;
	cout << endl;


	cout << "===== removeFirst =====" << endl;
	deque->removeFirst();
	deque->PrintAll();

	deque->removeFirst();
	deque->PrintAll();

	deque->removeFirst();
	deque->PrintAll();

	deque->removeFirst();
	deque->PrintAll();

	deque->removeFirst();
	deque->PrintAll();

	cout << "비었는가? : " << deque->isEmpty() << endl;
	cout << endl;

	cout << "===== addLast =====" << endl;
	deque->addLast(1);
	deque->addLast(2);
	deque->addLast(3);
	deque->addLast(4);
	deque->addLast(5);

	deque->PrintAll();
	cout << "비었는가? : " << deque->isEmpty() << endl;
	cout << endl;

	cout << "===== removeLast =====" << endl;
	deque->removeLast();
	deque->PrintAll();

	deque->removeLast();
	deque->PrintAll();

	deque->removeLast();
	deque->PrintAll();

	deque->removeLast();
	deque->PrintAll();

	deque->removeLast();
	deque->PrintAll();
	cout << "비었는가? : " << deque->isEmpty() << endl;
	cout << endl;


	delete deque; // 메모리 해제
	return 0;
}