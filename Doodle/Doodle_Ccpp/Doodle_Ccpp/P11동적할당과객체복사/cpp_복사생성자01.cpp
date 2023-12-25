/* string Ŭ����*/

#include "../help.h"

class String
{
public:
	String() {
		cout << "������ String() : " << '\n';
		strData = 0;
		len = 0;
	}

	String(const char* str) {

		cout << "overroding ������ String(const char*str) : " << '\n';
		len = strlen(str);
		strData = new char[len + 1]; // ���ڿ� ���� �����Ҵ�
		strcpy(strData, str); //�Ҵ�� strData, str�� ���� (���� ����!)
		cout << "overroding ������ String(const char*str) ����: " << '\n';
	}

	~String()
	{
		cout << "�Ҹ��� ȣ��" << '\n';
		if (strData)
		{
			cout << "strData �����Ҵ� ����" << '\n';
			delete[] strData;
		}
		cout << "�Ҹ��� ����" << '\n';
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
	char* strData; //�����Ҵ�� char�� �迭 ����Ų��.
	int len;       //���ڿ� ���� ����

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
	
	cout << "================ main �� ===============" << '\n';
	return 0;
}