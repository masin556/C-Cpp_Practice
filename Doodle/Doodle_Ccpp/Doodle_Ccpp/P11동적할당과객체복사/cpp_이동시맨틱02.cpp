#define _CRT_SECURE_NO_WARNINGS
#include "../help.h"
#include <utility>  // std::move

class MyString {
public:
    // 기본 생성자
    MyString() : data(nullptr), size(0) {
       cout << "기본 생성자 출력" << endl;
    }

    // 이동 생성자
    MyString(MyString&& other) noexcept {
        cout << "이동생성자 시작" << endl;
        data = other.data;
        size = other.size;
        other.data = nullptr;
    }

    // 이동 대입 연산자
    MyString& operator=(MyString&& other) noexcept {
        cout << "이동대입 연산자 시작" << endl;
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
        }
        cout << "이동대입 연산자 끝" << endl;
        return *this;
    }

    // 문자열 할당 함수
    void AssignString(const char* str) {
        cout << "문자열 할당 함수 시작" << endl;
        // 기존 데이터 삭제
        delete[] data;

        // 문자열 길이 계산
        size = strlen(str);

        // 메모리 동적 할당
        data = new char[size + 1];

        // 문자열 복사
        strcpy(data, str);
        cout << "문자열 할당 함수 끝" << endl;
    }

    // 문자열 출력 함수
    void PrintString() const {
        cout << "문자열 출력 함수 시작" << endl;
        std::cout << "String: " << data << std::endl;
        cout << "문자열 출력 함수 끝" << endl;
    }

    // 소멸자
    ~MyString() {
        cout << "소멸자 시작" << endl;
        delete[] data;
    }

private:
    char* data;
    size_t size;
};

int main() {

    cout << "main 함수 시작" << endl;

    MyString str1;

    // 사용자로부터 문자열 입력 받기
    std::cout << "Enter a string: ";
    char userInput[100];
    std::cin >> userInput;

    // 입력 받은 문자열을 MyString 객체에 할당 (이동 의미론 활용)
    str1.AssignString(userInput);

    // 할당된 문자열 출력
    str1.PrintString();

    cout << "main 함수 끝" << endl;
    return 0;
}