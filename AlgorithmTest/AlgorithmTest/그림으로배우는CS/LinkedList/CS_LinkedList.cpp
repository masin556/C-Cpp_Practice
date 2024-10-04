#include <iostream>
#include "CS_LinkedList.h"



Node::Node(int value, Node* nextNode)
{
    this->data = value; // data초기화
    this->next = nextNode; // next 초기화
}

LinkedList::LinkedList()
{
    this->head = nullptr;
}

LinkedList::~LinkedList() // 안전빵
{
    Node* currentNode = head; // 현재 노드를 head로 초기화
    while (currentNode != nullptr) // 현재 노드가 nullptr이 아닐 때까지 반복
    {
        Node* nextNode = currentNode->next; // 다음 노드 저장
        delete currentNode; // 현재 노드 삭제.
        currentNode = nextNode; // 다음 노드로 이동
    }
    Clear();
}

int main()
{
    Node* node1 = new Node(1); //데이터 1과 다음 노드가 node2
    Node* node2 = new Node(2); //데이터 2와 다음 노드가 node3인 노드
    Node* node3 = new Node(3); //데이터 3

    node1->next = node2;
    node2->next = node3;

    cout << node1->data << endl;
    cout << node1->next->data << endl;
    cout << node1->next->next->data << endl;

    delete node1;
    delete node2;
    delete node3;

    // 연결리스트 Insert 테스트
    LinkedList* list = new LinkedList(); // 인스턴스화? 동적할당?

    cout << "====== InsertAt() 다섯 번 호출 ======" << endl;
    list->InsertAt(0, 0);
    list->InsertAt(1, 1);
    list->InsertAt(2, 2);
    list->InsertAt(3, 3);
    list->InsertAt(4, 4);

    list->PrintfAll();


    cout << "====== Clear() 호출 ======" << endl;
    list->Clear();
    list->PrintfAll();

    cout << "====== InsertLast() 세 번 호출 ======" << endl;
    list->InsertLast(0);
    list->InsertLast(1);
    list->InsertLast(2);
    list->PrintfAll();

    cout << "====== DeleteAt() 호출 ======" << endl;
    list->DeleteAt(0);
    list->PrintfAll();
    list->DeleteAt(1);
    list->PrintfAll();

    std::cout << "====== 삽입되었습니다 ======" << std::endl;
    list->InsertLast(5); // 현재 5를 뒤에 삽입
    list->PrintfAll();

    cout << "====== DeleteLast() 호출 ======" << endl;
    list->DeleteLast();
    list->DeleteLast();
    list->PrintfAll();

    cout << "====== GetNodeAt() 호출 ======" << endl;
    list->InsertLast(1);
    list->InsertLast(2);
    list->InsertLast(3);
    list->InsertLast(4);
    list->InsertLast(5);

    int secondNode = list->GetNodeAt(2); // 찾기
    printf("data: %d\n", secondNode);
    //cout << "data:" << secondNode << endl;

    /*메모리해제*/
    delete list;

    return 0;
}
