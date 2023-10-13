/*자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다"라고 출력하는 프로그램을 작성하세요,
단. 반드시 std:cout std::cin을 사용*/

#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
	char name[10];
	int age = 0;

	cout << "나이 : ";
	cin >> age;

	cout << "이름 : ";
	cin >> name;

	cout << "나의 이름은 " << name << "이고, " << age << "살 입니다." << endl;
}