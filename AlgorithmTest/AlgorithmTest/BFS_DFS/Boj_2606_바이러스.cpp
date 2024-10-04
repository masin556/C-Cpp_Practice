#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Net[101];
bool        visited[101];

int Comput, NetCnt, a, b, WarmCnt = 0; /* 컴퓨터수 , 네트워크연결, 순서쌍, 감염수*/

void dfs (int x)
{
    visited[x] = true;
    for (int i = 0; i < Net[x].size(); i++)
    {
        int y = Net[x][i];
        if (!visited[y])
        {
            dfs (y);
            WarmCnt++;
        }
    }
}

int main()
{
    cin >> Comput >> NetCnt;

    for (int i = 0; i < NetCnt; i++)
    {
        cin >> a >> b;
        Net[a].push_back (b);
        Net[b].push_back (a);
    }

    dfs (1);

    cout << WarmCnt << "\n";
}