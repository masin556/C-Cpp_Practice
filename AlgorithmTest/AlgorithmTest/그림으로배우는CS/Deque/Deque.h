#include "DoubleLinkedList.h"

class Deque
{
public:
	Deque()
	{
		list = new DoublyLinkedList();
	}
	~Deque()
	{
		delete list;
		list = nullptr;
	}

public:

	/*출력함수*/
	void PrintAll()
	{
		list->PrintAll();
	}

	/*삽입함수*/
	// 연결리스트 head에 데이터 삽입, 제거는 O(1)의 성능

	void addFirst(int data)
	{
		list->InsertAt(0, data); // O(1)의 성능으로 헤드에 삽입
	}

	int removeFirst() // O(1)의 성능으로 데이터 제거
	{
		return list->DeleteAt(0);
	}

	// addLast
	void addLast(int data)
	{
		// 마지막 원소에 삽입
		list->InsertAt(list->count, data);
	}

	int removeLast()
	{
		return list->DeleteLast(); // 얻은 노드 리턴
	}

	bool isEmpty()
	{
		return (list->count == 0);
	}


private:
	DoublyLinkedList* list;
};