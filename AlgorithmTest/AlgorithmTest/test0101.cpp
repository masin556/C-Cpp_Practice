#include <iostream>
#include <stdio.h>
using namespace std;

// 문제가 개 헷갈림... 짝수번째 그냥 짝수가 되면 되는줄

int main() {
    int n[10];
    int evensum = 0, oddsum = 0, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < 10; i++)
    {
        (i + 1) % 2 != 1 ? evensum += n[i] : oddsum += n[i], cnt++;
        cout << "even: " << evensum << endl;
        cout << "odd: " << oddsum << endl;
    }
    printf("%d %.1f", evensum, (float)(oddsum / cnt));
    return 0;
}