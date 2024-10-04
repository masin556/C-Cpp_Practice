#include "DoubleLinkedList.h"

class Queue {
public:

    Queue()
    {
        list = new DoublyLinkedList();
    }

    // 소멸자: list 포인터의 메모리 해제
    ~Queue() {
        delete list;  // 할당된 DoublyLinkedList 객체 메모리 해제
        list = nullptr;  // 안전을 위해 list 포인터를 nullptr로 설정
    }

    // 큐의 삽입 연산
    void Enqueue(int data) {
        list->InsertAt(0, data);
    }

    // 큐의 삭제 연산
    int Dequeue() {
        return list->DeleteLast();
    }

    // 큐의 가장 앞 데이터 확인
    int front() {
        int data = list->tail->data;
        return data;
    }


    // 큐가 비어있는지 확인
    int IsEmpty() {
        if (list->count == 0)
        {
            cout << "리스트가 비었습니다." << endl;
        }
        else
        {
            cout << "리스트에 무언가 있습니다." << endl;
        }
        return list->count == 0;
    }

public:
    DoublyLinkedList* list;
};