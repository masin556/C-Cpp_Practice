//std::cout

#include "pch.h"
#include <iostream>
#include <tchar.h>

int main(int argc, _TCHAR* argv[])
{
#pragma region std::cout방법
	//준내 귀찮은 방법이지만... std::를 붙인다..
	std::cout << 10 << std::endl;
	std::cout << 10U << std::endl; //U 출력 안됨
	std::cout << 10.5F << std::endl; //F 출력안됨
	std::cout << 10.5 << std::endl;
	std::cout << 3 + 4 << std::endl;
#pragma endregion


#pragma region string
	//C에서 불가능한 것들 문자열 출력시 CPP에서는 가능
	std::string strData = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "Now string";
	std::cout << strData << std::endl;

	std::cout << "저는 " << 20 << "살" << "입니다." << std::endl;

	/*보통 C에서는 %d 서식 지정자를 넣어서 정수를 출력하였지만. Cpp에서는 그냥 넣어주면된다.*/
#pragma endregion
	return 0;
}