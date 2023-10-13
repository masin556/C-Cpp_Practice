/*�Լ� ���ø�
���� -
template <typename T>
��ȯ���� �Լ��̸�(�Ű�����)
{

}
typename�� �ڷ���
T�� �ڷ����̴�.
���ø��� ������ Ʋ
��ȭ�� Ʋ�� ���ٴ� ����

�������� TestFunc() �Լ��� ���ø� �Լ��̴�. ȣ���ڰ� � ���μ��� TestFunc()�Լ��� ȣ���ϴ°��� ���� �ڵ�����
���� ���ǰ� �̷������.(����� �ڵ忡 ���� �����Ϸ��� ���� ���� �ڵ带 �����.
*/

#include "pch.h"

template <typename T>
T TestFunc(T a)
{
	cout << "�Ű����� a: " << a << endl;

	return 0;
}

int main(int argc, wchar_t* argv[])
{
	cout << "int\t" << TestFunc(3) << endl;
	cout << "double\t" << TestFunc(3.3) << endl;
	cout << "char\t" << TestFunc('A') << endl;
	cout << "char*\t" << TestFunc("TestString") << endl;

	return 0;
}