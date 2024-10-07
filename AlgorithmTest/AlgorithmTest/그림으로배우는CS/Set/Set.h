#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
#include <list>

class Set {
private:
    std::vector<std::list<int>> hashTable; // 해시 테이블
    int tableSize; // 해시 테이블의 크기

public:
    //void insert(int key); // 요소 추가
    //void remove(int key); // 요소 제거
    //bool contains(int key); // 요소 존재 여부 확인
    //bool isEmpty(); // 집합이 비어있는지 확인
    //void clear(); // 집합 비우기
    //void print(); // 집합 출력

    // 생성자: 해시 테이블을 초기화
    Set(int size) {
        tableSize = size;
        hashTable.resize(tableSize);
    }

    // 소멸자: 특별한 작업 없음
    ~Set() {}

    // 해시 함수: 키의 해시 값을 계산
    int hashFunction(int key) {
        return key % tableSize;
    }

    // 요소 추가
    void insert(int key) {
        int index = hashFunction(key);
        hashTable[index].push_back(key); // 리스트에 키 추가
    }

    // 요소 제거
    void remove(int key) {
        int index = hashFunction(key);
        hashTable[index].remove(key); // 리스트에서 키 제거
    }

    // 요소 존재 여부 확인
    bool contains(int key) {
        int index = hashFunction(key);
        for (int item : hashTable[index]) {
            if (item == key) {
                return true; // 존재
            }
        }
        return false; // 존재하지 않음
    }

    // 집합이 비어있는지 확인
    bool isEmpty() {
        for (const auto& list : hashTable) {
            if (!list.empty()) {
                return false; // 비어있지 않음
            }
        }
        return true; // 비어있음
    }

    // 집합 비우기
    void clear() {
        for (auto& list : hashTable) {
            list.clear(); // 각 리스트 비우기
        }
    }

    // 집합 출력
    void print() {
        for (const auto& list : hashTable) {
            for (int item : list) {
                std::cout << item << " " << std::endl; // 각 요소 출력
            }
        }
        std::cout << std::endl;
    }

};

#endif
