#include <iostream>
#include <vector>
#define MAX 21
using namespace std;

int  numbers[MAX];
int target, n, cnt = 0;
bool wenttartget[MAX];

void dfs (int x)
{
    wenttartget[x] = true;
    
    for (int a : numbers)
    {
        if (!wenttartget[x])
            dfs (a);
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    dfs()

}