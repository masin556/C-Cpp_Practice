#include <iostream>
#include <vector>
using namespace std;

const int n = 6; //트리 갯수
vector<int> adj[n];

int visited[n];

void dfs(int u)
{
    visited[u] = 1;

    cout << u << '\n';

    for (int v : adj[u]) {
        if (visited[v] == 0) {
            dfs(v);
        }
    }
    cout << u << "로 부터 시작된 함수가 종료되었습니다.\n";
    return;
}

// dfs는 재귀적으로 탐색하는 알고리즘이다. 

int main() { 
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
}