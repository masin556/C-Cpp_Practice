#include <iostream>
using namespace std;

/*Node를 만들어 줄 클래스*/
class Node
{
public:
    // 생성자 호출 : 2개의 매개변수를 사용하여 데이터를 초기화
    /* 두번째 매개변수는 기본값 nullptr을 가짐 */
    //Node(int value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
    Node(int value, Node* nextNode = nullptr)
    {
        this->data = value; // data초기화
        this->next = nextNode; // next 초기화
    }

    int data; // 데이터
    Node* next; // 다음 노드에 대한 포인터
};

/*Linked List*/
class LinkedList
{
public:
    LinkedList() : head(nullptr), count(0) {}
    ~LinkedList() { Clear(); }


    /*원하는 데이터를 삽입하는 insert함수*/
    void InsertAt(int index, int data)
    {
        if (index > this->count || index < 0)
        {
            cout << "범위를 벗어났습니다" << endl;
            return;
        }

        Node* newNode = new Node(data); // 매개변수 data를 Node의 생성자로 넘겨줘 Node의 data를 설정

        if (index == 0) // 리스트의 가장 앞부분 인덱스가 0인 경우
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else // 앞부분을 제외한 나머지
        {
            Node* currentNode = this->head; // head에서 시작하기 때문에 head로 초기화

            // 목표인덱스 전까지 next를 이용해 currentNode를 이동시키자
            for (int i = 0; i < index - 1; i++)
            {
                currentNode = currentNode->next; // 두번째 떨어진 노드까지 접근
            }

            //목표인덱스 전노드까지 왔다면 새로운 노드가 currentNode의 next노드를 가리키고.
            // 그러고 currentNode가 새로운 노드를 가리키면 된다.

            newNode->next = currentNode->next;
            currentNode->next = newNode; // 새로운 노드를 가리킴

        }
        this->count++;
    }

    /* 마지막에 데이터 뒤에 삽입하는 기능 InsertLast*/
    void InsertLast(int data)
    {
        this->InsertAt(this->count, data); // 함수호출 후 인덱스에 리스트의 크기인 카운트를 넣고 뒤에 데이터를 삽입
    }


    /* Insert와 반대기능 Delete*/
    int DeleteAt(int index)
    {
        // -1이나 7처럼 범위를 넘어가는 경우 에러처리
        if (index >= this->count || index < 0)
        {
            cout << "해당 하는게 존재하지 않습니다." << endl;
            return 0;
        }

        Node* currentNode = this->head;

        // 첫번째 노드를 제거하는 상황
        if (index == 0)
        {
            Node* deleteNode = this->head; // 삭제될 노드를 저장 (리턴처리를 위함)
            this->head = this->head->next;
            int dataD = deleteNode->data; // 삭제된 데이터 저장
            delete deleteNode;
            this->count--;
            return dataD;
        }
        else  // head 노드를 제외한 나머지노드를 제거하는 상황
        {
            for (int i = 0; i < index - 1; i++)
            {
                currentNode = currentNode->next;
            }

            Node* deleteNode = currentNode->next;
            currentNode->next = currentNode->next->next;
            int dataD = deleteNode->data; // 삭제된 데이터 저장
            delete deleteNode;
            this->count--;
            return dataD;
        }
    }
    /* 노드 삭제하는 기능 */
    int DeleteLast()
    {
        // DeleteAt함수를 호출해서 list에 있는 count보다 1작은 값을 넘겨준다.
        return this->DeleteAt(this->count - 1); // 만약 데이터가3개면 2번인덱스가 마지막 데이터이기 때문
    }

    /* 읽고자하는 인덱스를 읽는 기능 */
    int GetNodeAt(int index)
    {
        // read 하는 인덱스가 리스트 범위 넘어가면 에러
        if (index >= this->count || index < 0)
        {
            cout << "범위 넘어갔다. 뭐하냐?" << endl;
            return -1;
        }

        Node* currentNode = this->head;
        for (int i = 0; i < index; i++)
        {
            printf("찾는 중 : %d \n", currentNode->data);
            currentNode = currentNode->next;
        }

        return currentNode->data;
    }

    /* 모든 데이터를 출력하는 함수 */
    void PrintfAll()
    {
        Node* currentNode = this->head;

        cout << "[ "; // 시작부분
        while (currentNode != nullptr) // currentNode가 null이 될때 까지
        {
            cout << currentNode->data; // next노드 이동전에 currentNode를출력
            currentNode = currentNode->next; // currenNode를 CurrentNode의 nextNode로 가리킨다.

            if (currentNode != nullptr)
            {
                cout << ", ";
            }
        }
        cout << " ]" << endl; // 종료부분 출력
    }

    /* 모든 원소를 제거하는 clear 함수*/
    void Clear()
    {
        //Node* currentNode = head;
        //Node* nextNode;

        //while (currentNode != nullptr)
        //{
        //    nextNode = currentNode->next;
        //    delete currentNode; // 노드 삭제
        //    currentNode = nextNode;
        //}
        //head = nullptr; // 헤드 초기화

        this->head = NULL;
        this->count = 0;
    }



public:
    int count;
    Node* head;

};
