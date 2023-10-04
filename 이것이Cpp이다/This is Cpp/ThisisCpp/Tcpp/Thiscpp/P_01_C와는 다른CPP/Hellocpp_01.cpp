/*stdafx.h : standard application frameworks의 약자 표준 애플리케이션 프레임워크
pch.h 는 미리 컴파일된 파일을 말한다. */

//_tmain은 _UNICODE가 정의되지 않은 한 main으로 확인한다. 정의된 경우 wmain으로 확인

#include <TCHAR.h> //_tmain을 사용하기 위함
#include <iostream>


int main(int argc, _TCHAR* argv[])
{
	std::cout << "Hello, World" << std::endl;

	return 0;
}
