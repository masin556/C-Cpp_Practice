// std::cin
#include "pch.h"
#include "tchar.h"
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int nAge;
	cout << "나이를 입력하세요." << endl;
	cin >> nAge;

	//문자형 배열선언
	char szJob[32];
	cout << "직업을 입력하세요." << endl;
	cin >> szJob;

	//문자열 선언
	string strName;
	cout << "이름을 입력하세요. " << endl;
	cin >> strName;

	cout << "당신의 이름은 : " << strName << "이고, "
		<< "나이는 " << nAge << "살이며, "
		<< "직업은 " << szJob << "입니다." << endl;


	return 0;
}


//////////////////////
/* 
위 내용을 만약에 C로 했었다면 
서식지정자를 이용해서 출력해야 하며, 
char 형 문자열 또한 쉽게 선언이 힘들다.*/