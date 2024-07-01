#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    try {
        cin >> n;
        if (n == 1)
            throw 123; // ù��° catch�� ����
        if (n == 2)
            throw string("abc"); // �ι�° catch�� ����
        if (n == 3)
            throw 3.14; // double�� �� ���� catch�� ����.
    }
    catch (int e) {
        cout << e << endl;
        cout << "catch�� ����" << endl;
    }
    catch (const string &e) {
        cout << e << endl;
    }
    catch (...) {
        cout << "�� �� ���� ���� �߻�" << endl;
    }
}