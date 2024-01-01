#include <iostream>
using namespace std;

void swapr(int &a, int &b); // a, b�� int�� ������ ��� �̸�
void swapp(int *p, int *q); // p, q�� int���� �����ϴ��ּ�
void swapv(int a, int b);   // a, b�� ���ο� ����

int main()
{
    int wallet1 = 3000;
    int wallet2 = 3500;

    cout << "���� 1 = " << wallet1 << "��";
    cout << ", ���� 2 = " << wallet2 << "��\n";

    cout << "������ �̿��Ͽ� ������� ��ȯ : \n";
    swapr(wallet1, wallet2);                              // ������ ����
    cout << "���� 1 = " << wallet1 << "��";
    cout << ", ���� 2 = " << wallet2 << "��\n";

    cout << "�����͸� �̿��Ͽ� ������� �ٽ� ��ȯ: \n";
    swapp(&wallet1, &wallet2);                            // ������ �ּҸ� ����
    cout << "���� 1 = " << wallet1 << "��";
    cout << ", ���� 2 = " << wallet2 << "��\n";

    cout << "������ �����Ͽ� ���� ��ȯ �õ�: \n";
    swapv(wallet1, wallet2);                            // ������ �� ����
    cout << "���� 1 = " << wallet1 << "��";
    cout << ", ���� 2 = " << wallet2 << "��\n";

    return 0;
}

////�Լ� ����////
void swapr(int &a, int &b) // ������ �̿��Ͽ� ��ȯ
{
    int temp;

    temp = a; // ������ ������ a, b�� ���
    a = b;
    b = temp;
}

void swapp(int *p, int *q)
{
    int temp;
    temp = *p; // ������ ������ *p, *q�� ���
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)
{
    int temp;
    temp = a; // ������ ������ a, b�� ���
    a = b;
    b = temp;
}