#include <iostream>
#include "Set.h"


int main() {
    Set mySet(10);
    //Set mySet(10); // 크기 10인 집합 생성

    std::cout << "isEmpty: " << (mySet.isEmpty() ? "true" : "false") << std::endl;
    std::cout << "=== 데이터 삽입 ===" << std::endl;
    mySet.insert(1);
    mySet.insert(123);
    mySet.insert(512);
    mySet.print(); // 집합 출력

    std::cout << "isEmpty: " << (mySet.isEmpty() ? "true" : "false") << std::endl;
    std::cout << "=== 데이터 체크1 ===" << std::endl;
    std::cout << "isContain: " << (mySet.contains(123) ? "true" : "false") << std::endl;

    std::cout << "=== 데이터 삭제 ===" << std::endl;
    mySet.remove(1);
    mySet.print(); // 집합 출력

    std::cout << "isEmpty: " << (mySet.isEmpty() ? "true" : "false") << std::endl;
    std::cout << "=== 데이터 체크2 ===" << std::endl;
    std::cout << "isContain: " << (mySet.contains(512) ? "true" : "false") << std::endl;

    mySet.clear(); // 집합 비우기
    std::cout << "=== clear ===" << std::endl;
    std::cout << "isEmpty: " << (mySet.isEmpty() ? "true" : "false") << std::endl;

    return 0;
}
