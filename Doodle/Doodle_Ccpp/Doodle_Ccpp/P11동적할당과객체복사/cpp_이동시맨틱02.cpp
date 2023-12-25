#define _CRT_SECURE_NO_WARNINGS
#include "../help.h"
#include <utility>  // std::move

class MyString {
public:
    // �⺻ ������
    MyString() : data(nullptr), size(0) {
       cout << "�⺻ ������ ���" << endl;
    }

    // �̵� ������
    MyString(MyString&& other) noexcept {
        cout << "�̵������� ����" << endl;
        data = other.data;
        size = other.size;
        other.data = nullptr;
    }

    // �̵� ���� ������
    MyString& operator=(MyString&& other) noexcept {
        cout << "�̵����� ������ ����" << endl;
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
        }
        cout << "�̵����� ������ ��" << endl;
        return *this;
    }

    // ���ڿ� �Ҵ� �Լ�
    void AssignString(const char* str) {
        cout << "���ڿ� �Ҵ� �Լ� ����" << endl;
        // ���� ������ ����
        delete[] data;

        // ���ڿ� ���� ���
        size = strlen(str);

        // �޸� ���� �Ҵ�
        data = new char[size + 1];

        // ���ڿ� ����
        strcpy(data, str);
        cout << "���ڿ� �Ҵ� �Լ� ��" << endl;
    }

    // ���ڿ� ��� �Լ�
    void PrintString() const {
        cout << "���ڿ� ��� �Լ� ����" << endl;
        std::cout << "String: " << data << std::endl;
        cout << "���ڿ� ��� �Լ� ��" << endl;
    }

    // �Ҹ���
    ~MyString() {
        cout << "�Ҹ��� ����" << endl;
        delete[] data;
    }

private:
    char* data;
    size_t size;
};

int main() {

    cout << "main �Լ� ����" << endl;

    MyString str1;

    // ����ڷκ��� ���ڿ� �Է� �ޱ�
    std::cout << "Enter a string: ";
    char userInput[100];
    std::cin >> userInput;

    // �Է� ���� ���ڿ��� MyString ��ü�� �Ҵ� (�̵� �ǹ̷� Ȱ��)
    str1.AssignString(userInput);

    // �Ҵ�� ���ڿ� ���
    str1.PrintString();

    cout << "main �Լ� ��" << endl;
    return 0;
}