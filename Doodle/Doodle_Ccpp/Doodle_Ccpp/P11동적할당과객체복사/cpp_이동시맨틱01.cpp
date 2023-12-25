#include <iostream>
#include <utility>  // std::move

class MyString {
public:
    MyString() : data(nullptr), size(0) {}

    // �̵� ������
    MyString(MyString&& other) noexcept {
        data = other.data;
        size = other.size;
        other.data = nullptr;  // �̵� �� ���� ��ü�� �ڿ��� nullptr�� ����
    }

    // �̵� ���� ������
    MyString& operator=(MyString&& other) noexcept {
        if (this != &other) {
            delete[] data;  // ���� �ڿ� ����
            data = other.data;
            size = other.size;
            other.data = nullptr;  // �̵� �� ���� ��ü�� �ڿ��� nullptr�� ����
        }
        return *this;
    }

    // ��Ÿ ��� �Լ� �� ����...

private:
    char* data;
    size_t size;
};

int main() {
    MyString str1;
    MyString str2 = std::move(str1);  // str1�� �ڿ��� str2�� �̵�
    str1 = std::move(str2);  // str2�� �ڿ��� str1�� �̵�

    return 0;
}