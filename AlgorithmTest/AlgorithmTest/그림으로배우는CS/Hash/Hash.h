#include <iostream>
#include <string>
using namespace std;
// 이중 연결 리스트의 노드 정의
class Node {
public:
    int playerNumber;
    string playerName;
    Node* prev;
    Node* next;

    Node(int num, const string name) : playerNumber(num), playerName(name), prev(nullptr), next(nullptr) {}
};

// 해시 테이블 클래스 정의
class HashTable {
private:
    static const int TABLE_SIZE = 10; // 해시 테이블 크기
    Node** table; // 해시 테이블 배열

public:
    HashTable() {
        table = new Node * [TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; ++i) {
            table[i] = nullptr; // 초기화
        }
    }

    ~HashTable() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            Node* current = table[i];
            while (current) {
                Node* toDelete = current;
                current = current->next;
                delete toDelete;
            }
        }
        delete[] table;
    }

    // 삽입 함수
    void set(int playerNumber, const string& playerName) {
        int index = playerNumber % TABLE_SIZE;
        Node* newNode = new Node(playerNumber, playerName);

        // 리스트의 맨 앞에 추가
        if (table[index]) {
            newNode->next = table[index];
            table[index]->prev = newNode;
        }
        table[index] = newNode;
    }

    // 검색 함수
    string get(int playerNumber) {
        int index = playerNumber % TABLE_SIZE;
        Node* current = table[index];

        while (current) {
            if (current->playerNumber == playerNumber) {
                return current->playerName; // 선수 이름 반환
            }
            current = current->next;
        }
        return "선수를 찾을 수 없습니다."; // 선수 없음
    }

    // 삭제 함수
    void remove(int playerNumber) {
        int index = playerNumber % TABLE_SIZE;
        Node* current = table[index];

        while (current) {
            if (current->playerNumber == playerNumber) {
                if (current->prev) {
                    current->prev->next = current->next;
                }
                else {
                    table[index] = current->next; // 첫 번째 노드 삭제
                }
                if (current->next) {
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }
};