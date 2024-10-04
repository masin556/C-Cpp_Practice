#include <iostream>
#include <set>
using namespace std;

//int main()
//{
//    int v[42] = {0};
//    int n;
//    int count = 0;
//    for (int i = 0; i < 10; i++) {
//        cin >> n;
//        v[n % 42]++;
//    }
//
//    for (int i = 0; i < 42; i++)
//    {
//        if (v[i] % 42 != 0)
//        {
//            count++;
//        }
//    }
//    cout << count << endl;
//
//    return 0;
//}

int main()
{
    set<int> remainders; // �ߺ��� ������� �ʴ� set ���
    int v;

    for (int i = 0; i < 10; i++) {
        cin >> v;
        remainders.insert(v % 42); // ������ ���� set�� ����
    }

    cout << remainders.size(); // ���� �ٸ� ������ ���� ���� ���

    return 0;
}



//int main()
//{
//    bool remainders[42] = {false}; // ������ ���� �ߺ� ���θ� �����ϴ� �迭
//    int value;
//
//    for (int i = 0; i < 10; i++) {
//        cin >> value;
//        remainders[value % 42] =
//            true; // �ش� ������ ���� �ߺ����� �ʾ����� ǥ��
//    }
//
//    int count = 0;
//    for (int i = 0; i < 42; i++) {
//        if (remainders[i]) {
//            count++;
//        }
//    }
//
//    cout << count; // �ߺ����� ���� ������ ���� ���� ���
//
//    return 0;
//}