/* string Ŭ����*/

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
		strData = new char[len + 1]; // ���ڿ� ���� �����Ҵ�
		strcpy(strData, str); //�Ҵ�� strData, str�� ���� (���� ����!)
	}

	/*
	String(const char * str) { strData = str; } // ���� ���簡 �Ͼ��.
	*/




private:
	char* strData; //�����Ҵ�� char�� �迭 ����Ų��.
	int len;       //���ڿ� ���� ����


};