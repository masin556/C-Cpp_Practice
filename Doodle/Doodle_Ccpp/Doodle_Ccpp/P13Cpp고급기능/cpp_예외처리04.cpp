#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    try {
        cin >> n;
        if (n == 1)
            throw 123; // 첫번째 catch문 실행
        if (n == 2)
            throw string("abc"); // 두번째 catch문 실행
        if (n == 3)
            throw 3.14; // double형 을 받을 catch가 없다.
    }
    catch (int e) {
        cout << e << endl;
        cout << "catch문 실행" << endl;
    }
    catch (const string &e) {
        cout << e << endl;
    }
    catch (...) {
        cout << "알 수 없는 예외 발생" << endl;
    }
}