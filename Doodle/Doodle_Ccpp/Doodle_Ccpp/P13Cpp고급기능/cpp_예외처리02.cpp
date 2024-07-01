#include <iostream>
#include <string>
using namespace std;

int fact(int n)
{
    if (n < 1)
        throw to_string(n) + ": �ڿ����� �ƴϴ�.";
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n, r;
    try {
        cout << "�ڿ��� 2�� �Է� : ";
        cin >> n >> r;

        int a = fact(n);
        int b = fact(r); // �� �� �ѱ������� ���� �߻��� catch�� �̵�
        int c = fact(n - r);

        int result = a / b / c;
        cout << result << endl;
    }

    catch (const string &e) {
        cout << e << endl;
    }
}
