#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int pizzas = n / 7;

    if (n % 7 != 0)
    {
        pizzas++;
    }

    return pizzas;
}

int main()
{
    int n = 0;
    cin >> n;

    solution(n);

    cout << n << endl;
}