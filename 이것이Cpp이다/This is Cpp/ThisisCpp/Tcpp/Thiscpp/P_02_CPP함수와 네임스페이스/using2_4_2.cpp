/*using���� : ���ӽ����̽��� '�Ҽ�' �Ǵ� ������ ��Ÿ���ٰ� �� �� �ִ�. 
�츮�� ���� �ž� 31��� ��ľ� �󸥿ͼ� ��Ծ� �ϰ� �θ��� �ʴ´�. 
�׳� ��ľ� ��� �θ��״�. �׷��� �̶� 
������ ���� �����ϰ� �Ǵµ� : �̶� ���� using �̴�*/

#include "pch.h"

//std ���ӽ����̽��� using ������ �����Ѵ�.
//using namespace std; //������ ���� pch.h �� ���ִ�.

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		//cout�� ���ؼ� ������ �������� �ʾƵ� �������.
		cout << "TEST::TestFunc()" << endl;
	}
}

//TEST ���ӽ����̽��� suing ����
using namespace TEST;

int main()
{
	//TestFunc()�� g_nData���� ���� ������ �� �ʿ䰡 ����. 
	TestFunc();
	cout << g_nData << endl;

	return 0;
}

