/* 이중 연결 리스트 */

#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    // 리스트에 노드 추가
    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);

    std::cout << "리스트 출력: ";
    list.display(); // 5 10 20 30

    // 노드 삭제
    list.deleteNode(20);
    std::cout << "20 삭제 후 리스트 출력: ";
    list.display(); // 5 10 30

    return 0;
}
/**
* Node 클래스:
각 노드는 데이터 필드와 이전/다음 노드를 가리키는 두 개의 포인터를 가진다. 
생성자는 초기값을 설정

* DoublyLinkedList 클래스:
head와 tail 포인터를 사용해 리스트의 시작과 끝을 추적하고,
append 함수는 리스트의 끝에 노드를 추가한다.
prepend 함수는 리스트의 시작에 노드를 추가.
deleteNode 함수는 특정 값을 가진 노드를 삭제.
display 함수는 리스트의 모든 노드를 출력

* main 함수:
이중 연결 리스트를 생성하고, 노드를 추가 및 삭제한 후 리스트를 출력합니다.
*/