/* https://www.acmicpc.net/problem/2439 */
// ������ ���� �κ��� �� �ľ��ؾ��Ѵ�?

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) { // �ٽ�
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << '\n';
    }
}