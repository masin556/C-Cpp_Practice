//std::cout

#include "pch.h"
#include <iostream>
#include <tchar.h>

int main(int argc, _TCHAR* argv[])
{
#pragma region std::cout���
	//�س� ������ ���������... std::�� ���δ�..
	std::cout << 10 << std::endl;
	std::cout << 10U << std::endl; //U ��� �ȵ�
	std::cout << 10.5F << std::endl; //F ��¾ȵ�
	std::cout << 10.5 << std::endl;
	std::cout << 3 + 4 << std::endl;
#pragma endregion


#pragma region string
	//C���� �Ұ����� �͵� ���ڿ� ��½� CPP������ ����
	std::string strData = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "Now string";
	std::cout << strData << std::endl;

	std::cout << "���� " << 20 << "��" << "�Դϴ�." << std::endl;

	/*���� C������ %d ���� �����ڸ� �־ ������ ����Ͽ�����. Cpp������ �׳� �־��ָ�ȴ�.*/
#pragma endregion
	return 0;
}