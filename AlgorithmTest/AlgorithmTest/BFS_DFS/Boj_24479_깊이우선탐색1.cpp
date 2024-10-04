#include <algorithm>
#include <iostream>
#include <vector>

#define STR ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
vector<int> sequence;

int cnt = 0;

void dfs(int x)
{
    if (visited[x] == 1) { // �湮�� ���̸� return; �߿��Ѻκ�
        return;
    }

    visited[x] = 1; // �湮���� �ʾҴٸ� �湮�ߴٰ� ǥ��

    cnt++;
    sequence[x] = cnt;

    for (int i = 0; i < graph[x].size(); i++) {
        dfs(graph[x][i]);
    }
}

int main()
{
    STR;
    int N, M, R, u, v;
    cin >> N >> M >> R; // 5 5 1

    graph.resize(N + 1);
    visited.resize(N + 1);
    sequence.resize(N + 1);

    for (int i = 1; i <= M; i++) {
        cin >> u >> v; // �迭�� �� �� ��
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end(), less<int>());
    }

    dfs(R);

    for (int i = 1; i <= N; i++) {
        cout << sequence[i] << "\n";
    }

    return 0;
}