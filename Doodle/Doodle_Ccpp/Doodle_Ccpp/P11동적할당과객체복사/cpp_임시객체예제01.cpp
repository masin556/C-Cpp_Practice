#include "../help.h"
#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS

class MyString
{
public:
	MyString(const char* str)
	{
		size = strlen(str);
		data = new char[size + 1]; //동적할당
		//strcpy(data, str);
		strcpy_s(data, size + 1, str);
	}

	// 이동 생성자
	MyString(MyString&& other) noexcept
	{
		data = other.data;
		size = other.size;
		other.data = nullptr;  // 이동 후 원본 객체의 자원을 nullptr로 설정
	}


	~MyString() { delete[] data; }


private:
	char* data;
	size_t size;
};



//문자열 생성 하여 반환하는 함수
MyString createString() { return MyString("Hello, World!"); }


int main()
{
	MyString str = createString();  // 임시 객체가 생성되고 이동 의미론을 통해 전달됨

	return 0;
}