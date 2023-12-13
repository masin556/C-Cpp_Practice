/* string 클래스*/

#include "../help.h"

class String
{
public:
	String() {
		strData = nullptr;
		len = 0;
	}
	String(const char *str) {
		len = strlen(str);
		strData = new char[len + 1]; // 문자열 저장 동적할당
		strcpy(strData, str); //할당된 strData, str을 복사 (깊은 복사!)
	}

	/*
	String(const char * str) { strData = str; } // 얕은 복사가 일어난다.
	*/




private:
	char* strData; //동적할당된 char형 배열 가리킨다.
	int len;       //문자열 길이 저장


};