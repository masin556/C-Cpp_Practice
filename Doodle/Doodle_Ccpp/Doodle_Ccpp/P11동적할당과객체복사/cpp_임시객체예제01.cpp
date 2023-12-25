#include "../help.h"
#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS

class MyString
{
public:
	MyString(const char* str)
	{
		size = strlen(str);
		data = new char[size + 1]; //�����Ҵ�
		//strcpy(data, str);
		strcpy_s(data, size + 1, str);
	}

	// �̵� ������
	MyString(MyString&& other) noexcept
	{
		data = other.data;
		size = other.size;
		other.data = nullptr;  // �̵� �� ���� ��ü�� �ڿ��� nullptr�� ����
	}


	~MyString() { delete[] data; }


private:
	char* data;
	size_t size;
};



//���ڿ� ���� �Ͽ� ��ȯ�ϴ� �Լ�
MyString createString() { return MyString("Hello, World!"); }


int main()
{
	MyString str = createString();  // �ӽ� ��ü�� �����ǰ� �̵� �ǹ̷��� ���� ���޵�

	return 0;
}