#include <iostream>
using namespace std;

class Node {
public:
    // 생성자: 노드 데이터를 초기화하고 다음 및 이전 노드를 설정
    Node(int value, Node* nextNode = nullptr, Node* prevNode = nullptr)
        : data(value), next(nextNode), prev(prevNode) {}

    int data; // 노드의 데이터
    Node* next; // 다음 노드를 가리키는 포인터
    Node* prev; // 이전 노드를 가리키는 포인터
};

// 이중 연결 리스트 클래스
class DoublyLinkedList {
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), count(0) {}

    // 소멸자: 리스트의 모든 노드를 해제
    ~DoublyLinkedList() {
        Clear();
    }

    // 특정 위치에 데이터 삽입
    void InsertAt(int index, int data) {
        if (index < 0 || index > count) { // 유효하지 않은 인덱스 체크
            cout << "유효하지 않은 인덱스입니다." << endl;
            return;
        }

        if (index == 0) { // 인덱스가 0이면 첫 번째 노드로 삽입
            InsertFirst(data);
            return;
        }

        if (index == count) { // 인덱스가 리스트의 끝이면 마지막 노드로 삽입
            InsertLast(data);
            return;
        }

        Node* newNode = new Node(data); // 새 노드 생성
        Node* currentNode = head; // 현재 노드를 헤드로 설정

        // 인덱스까지 이동
        for (int i = 0; i < index; ++i) {
            currentNode = currentNode->next; // 다음 노드로 이동
        }

        // 새 노드와 연결
        newNode->prev = currentNode->prev; // 새 노드의 이전 노드를 설정
        newNode->next = currentNode; // 새 노드의 다음 노드를 현재 노드로 설정

        // 이전 노드와 연결
        if (currentNode->prev != nullptr) {
            currentNode->prev->next = newNode; // 현재 노드의 이전 노드와 새 노드 연결
        }
        currentNode->prev = newNode; // 현재 노드의 이전 노드를 새 노드로 설정

        // 리스트의 첫 번째 노드인 경우 헤드 업데이트
        if (newNode->prev == nullptr) {
            head = newNode; // 새 노드가 헤드가 됨
        }

        count++; // 노드 수 증가
    }

    // 리스트의 첫 번째에 데이터 삽입
    void InsertFirst(int data) {
        Node* newNode = new Node(data); // 새 노드 생성

        if (head == nullptr) { // 리스트가 비어있다면
            head = newNode; // 새 노드를 헤드로 설정
            tail = newNode; // 새 노드를 테일로 설정
        }
        else { // 리스트에 노드가 이미 존재하는 경우
            newNode->next = head; // 새 노드의 다음을 현재 헤드로 설정
            head->prev = newNode; // 현재 헤드의 이전을 새 노드로 설정
            head = newNode; // 새 노드를 헤드로 설정
        }

        count++; // 노드 수 증가
    }

    // 리스트의 끝에 데이터 삽입
    void InsertLast(int data) {
        Node* newNode = new Node(data);
        if (tail != nullptr) {
            tail->next = newNode; // 기존 테일의 다음을 새 노드로 설정
            newNode->prev = tail; // 새 노드의 이전을 기존 테일로 설정
            tail = newNode; // 새 노드를 테일로 설정
        }
        else {
            head = tail = newNode; // 리스트가 비어있다면 헤드와 테일을 새 노드로 설정
        }
        count++; // 노드 수 증가
    }

    // 특정 위치의 노드 삭제
    int DeleteAt(int index) {
        if (index >= count || index < 0) {
            cout << "제거할 수 없습니다." << endl;
            return -1; // 유효하지 않은 인덱스의 경우 -1 반환
        }

        Node* currentNode = head; // 현재 노드를 헤드로 설정
        int deleteData = 0; // 삭제할 데이터 초기화

        if (index == 0) { // 첫 번째 노드를 삭제하는 경우
            Node* deletedNode = head;
            deleteData = deletedNode->data;

            if (head == tail) { // 리스트에 노드가 하나만 있는 경우
                head = tail = nullptr; // 헤드와 테일을 nullptr로 설정
            }
            else {
                head = head->next; // 헤드를 다음 노드로 설정
                head->prev = nullptr; // 새로운 헤드의 이전을 nullptr로 설정
            }
            delete deletedNode; // 삭제된 노드 메모리 해제
        }
        else if (index == count - 1) { // 마지막 노드를 삭제하는 경우
            Node* deletedNode = tail;
            deleteData = deletedNode->data;

            tail = tail->prev; // 테일을 이전 노드로 설정
            if (tail != nullptr) {
                tail->next = nullptr; // 새로운 테일의 다음을 nullptr로 설정
            }
            else {
                head = nullptr; // 리스트가 비어있다면 헤드도 nullptr로 설정
            }
            delete deletedNode; // 삭제된 노드 메모리 해제
        }
        else { // 중간 노드를 삭제하는 경우
            for (int i = 0; i < index; i++) {
                currentNode = currentNode->next; // 인덱스 위치로 이동
            }

            Node* deletedNode = currentNode; // 삭제할 노드
            deleteData = deletedNode->data; // 삭제할 데이터 저장
            currentNode->prev->next = currentNode->next; // 이전 노드와 다음 노드 연결
            if (currentNode->next != nullptr) {
                currentNode->next->prev = currentNode->prev; // 다음 노드의 이전 노드 연결
            }
            delete deletedNode; // 삭제된 노드 메모리 해제
        }

        count--; // 노드 수 감소
        return deleteData; // 삭제된 데이터 반환
    }

    // 마지막 노드 삭제
    int DeleteLast() {
        return DeleteAt(count - 1);
    }

    // 모든 데이터를 출력
    void PrintAll() {
        Node* currentNode = head; // 현재 노드를 헤드로 설정
        cout << "[ ";
        while (currentNode != nullptr) {
            cout << currentNode->data; // 노드 데이터 출력
            currentNode = currentNode->next; // 다음 노드로 이동
            if (currentNode != nullptr) {
                cout << ", "; // 다음 노드가 있으면 쉼표 추가
            }
        }
        cout << " ]" << endl;
    }

    // 해당 인덱스의 값 보기
    int getNodeAt(int index) {
        if (index >= count || index < 0) {
            cout << "범위를 넘어갔습니다." << endl;
            return -1; // 유효하지 않은 인덱스의 경우 -1 반환
        }

        Node* currentNode = head; // 현재 노드를 헤드로 설정
        for (int i = 0; i < index; i++) {
            currentNode = currentNode->next; // 인덱스 위치로 이동
        }

        return currentNode->data; // 해당 인덱스의 데이터 반환
    }

    // 모든 원소를 제거
    void Clear() {
        while (head != nullptr) {
            Node* currentNode = head; // 현재 노드를 헤드로 설정
            head = head->next; // 헤드를 다음 노드로 업데이트
            delete currentNode; // 현재 노드 메모리 해제
        }
        tail = nullptr; // 테일을 nullptr로 설정
        count = 0; // 노드 수 초기화
    }

public:
    int count; // 노드 수
    Node* head; // 리스트의 헤드
    Node* tail; // 리스트의 테일
};
