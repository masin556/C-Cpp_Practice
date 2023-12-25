/* string 클래스*/

#include "../help.h"

class String
{
public:
	String() {
		cout << "생성자 String() : " << '\n';
		strData = 0;
		len = 0;
	}

	String(const char* str) {

		cout << "overroding 생성자 String(const char*str) : " << '\n';
		len = strlen(str);
		strData = new char[len + 1]; // 문자열 저장 동적할당
		strcpy(strData, str); //할당된 strData, str을 복사 (깊은 복사!)
		cout << "overroding 생성자 String(const char*str) 종료: " << '\n';
	}

	~String()
	{
		cout << "소멸자 호출" << '\n';
		if (strData)
		{
			cout << "strData 동적할당 해제" << '\n';
			delete[] strData;
		}
		cout << "소멸자 종료" << '\n';
	}

	const char* GetStrData() const
	{
		cout << "GetStrData() : " << '\n';
		if (strData)
			return strData;

		return "";
	}

	int GetLen() const
	{
		return len;
	}
	
private:
	char* strData; //동적할당된 char형 배열 가리킨다.
	int len;       //문자열 길이 저장

};


int main()
{
	cout << "================ main ===============" << '\n';
	cout << "================ s1 ===============" << '\n';
	String s1;
	cout << "================ s2 ===============" << '\n';
	String s2("Hello");


	cout << "s1.GetLen() : " << s1.GetLen() << " " << &s1 << endl;
	cout << "s1.GetStrData() : " << s1.GetStrData() << endl;
	cout << "s2.GetLen() : " << s2.GetLen() << " " << &s2 << endl;
	cout << "s2.GetStrData() : " << s2.GetStrData() << endl;
	
	cout << "================ main 끝 ===============" << '\n';
	return 0;
}