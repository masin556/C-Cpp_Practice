#include "../LinkedList/CS_LinkedList.h"
#include <iostream>

class Stack
{
public:
	Stack() {
		list = new LinkedList();
	}
	~Stack() {
		delete list;
	}

/* push 삽입 함수 */
	void push(int data)
	{
		list->InsertAt(0, data);// 스택가장 위 삽입
	}

/* pop 데이터를 꺼내는 */
	int pop()
	{
		try {
			return list->DeleteAt(0);
		}
		catch (int error)
		{
			std::cout << "Error occurred: " << error << std::endl; // 에러 메시지 출력
			return 0;
		}
	}

/*Peek 스택의 탑에 있는 데이터를 참조만 함*/
	int peek()
	{
		return list->GetNodeAt(0);
	}

/* IsEmpty 함수 스택이 비어있다면 True 아니면 False*/
	int isEmpty()
	{
		return (list->count == 0);
	}

public:
	LinkedList* list;
	int data;
};

