#include <iostream>
#include <utility>  // std::move

class MyString {
public:
    MyString() : data(nullptr), size(0) {}

    // 이동 생성자
    MyString(MyString&& other) noexcept {
        data = other.data;
        size = other.size;
        other.data = nullptr;  // 이동 후 원본 객체의 자원을 nullptr로 설정
    }

    // 이동 대입 연산자
    MyString& operator=(MyString&& other) noexcept {
        if (this != &other) {
            delete[] data;  // 기존 자원 해제
            data = other.data;
            size = other.size;
            other.data = nullptr;  // 이동 후 원본 객체의 자원을 nullptr로 설정
        }
        return *this;
    }

    // 기타 멤버 함수 및 정의...

private:
    char* data;
    size_t size;
};

int main() {
    MyString str1;
    MyString str2 = std::move(str1);  // str1의 자원을 str2로 이동
    str1 = std::move(str2);  // str2의 자원을 str1로 이동

    return 0;
}