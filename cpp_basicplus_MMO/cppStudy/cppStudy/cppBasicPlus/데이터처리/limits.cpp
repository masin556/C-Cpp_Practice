/*������ ���� �˾Ƴ��� ��*/

#pragma region sizeof & climits���
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n_int = INT_MAX;  //n_int�� int���� �ִ밪���� �ʱ�ȭ
	short n_short = SHRT_MAX;  //limits.h ���Ͽ� ���ǵ� ��ȣ ���
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ���.
	cout << "int�� " << sizeof(int) << " ����Ʈ�̴�." << endl;
	cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl;
	cout << "long�� " << sizeof n_long << " ����Ʈ�̴�." << endl;
	cout << "long long�� " << sizeof n_llong << " ����Ʈ�̴�." << endl;
	cout << endl;

	cout << "�ִ밪:" << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << "int�� �ּ� �ִ� = " << INT_MIN << " ~ " << n_int << endl;
	cout << "char�� ��Ʈ �� = " << CHAR_BIT << endl;

	return 0;
}

#pragma endregion