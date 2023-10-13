/*����Ʈ �Ű������� ���������� Ȱ���� ��
1. CalcLayout() �Լ��� 2013�⿡ ö���� �ۼ��߰� �����ؿ� �浵�̰� ���(ȣ��)�ߴٰ� ����
2. �ð��� �귯 ������� ���� �Լ� ������ �����ؼ� ����Ϸ� �ߴ� ����
- �Լ������� ����Ǿ��� �Լ� ��ü ���谡 �޶��� ���̴�.
�׷��� 2013�⿡ �浿�� �� ���� �ڵ�� ������ ���� ���µ�, �̴� ����� �����������.
2013�⿡ �浿�̰� �ۼ��� �ڵ�� �Լ� ������ �޶��� ������ ������ �߻��� ���̱� �����̴�.
��θ� �����ϱ� ���� 2013�� �浿���� �ڵ带 �����ϴ� ���� �Ұ����� ���δ�. ������ ö���� CalcLayout()�Լ��� ������
�浿���� �ڵ带 ������ �ʿ���� �ٽ� ���常 �ϸ�ȴ�.

*/


#include "pch.h"

#define MYTPYE_A 100
#define MYTPYE_B 200

//2013�⿡ ö���� ���� �Լ�
//int CalcLayout(int nWidth, int nHeight)
//{
//	return nWidth * nHeight;
//}

//int CalcLayout(int nWidth, int nHeight, int nType) ����
int CalcLayout(int nWidth, int nHeight, int nType = MYTPYE_A) //����
{
	return nWidth * nHeight + nType;
}


//2013�� �浿���� �ڵ�
//int main()
//{
//	CalcLayout(10, 5);
//
//	return 0;
//}

//2016 ������ �ڵ�
int main()
{
	CalcLayout(10, 5); //�浿

	CalcLayout(10, 5, MYTPYE_A);

	return 0;
}