/* https://www.acmicpc.net/problem/25314 */
// ���� �ڷ����� �̸��� ���
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ln;
    cin >> ln;

    for (int i = 0; i < ln / 4; i++)
    {
        cout << "long ";
    }
    cout << "int";

    return 0;
}