// 노드 클래스 정의
class Node {
  public:
    int data;   // 데이터 필드
    Node *prev; // 이전 노드를 가리키는 포인터
    Node *next; // 다음 노드를 가리키는 포인터

    // 생성자
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// 이중 연결 리스트 클래스 정의
class DoublyLinkedList {
  private:
    Node *head; // 리스트의 시작을 가리키는 포인터
    Node *tail; // 리스트의 끝을 가리키는 포인터

  public:
    // 생성자
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // 리스트의 끝에 노드 추가
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head) { // 리스트가 비어있는 경우
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // 리스트의 시작에 노드 추가
    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (!head) { // 리스트가 비어있는 경우
            head = tail = newNode;
        }
        else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // 특정 값의 노드 삭제
    void deleteNode(int value)
    {
        Node *current = head;
        while (current) {
            if (current->data == value) {
                if (current->prev) {
                    current->prev->next = current->next;
                }
                else { // 삭제할 노드가 헤드인 경우
                    head = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                }
                else { // 삭제할 노드가 테일인 경우
                    tail = current->prev;
                }
                delete current;
                return; // 노드를 삭제한 후 함수를 종료
            }
            current = current->next;
        }
    }

    // 리스트의 모든 노드를 출력
    void display()
    {
        Node *current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};