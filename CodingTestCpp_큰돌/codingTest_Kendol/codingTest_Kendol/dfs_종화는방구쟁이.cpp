#include <iostream>
#include <vector>
#define MAX 104

using namespace std;

int graph[MAX][MAX];
bool visited[MAX][MAX] = {};

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n, m, a, b, ny, nx, cnt = 0;

void dfs(int x, int y)
{
    visited[x][y] = true;

    // 디버깅
    cout << x << " : " << y << '\n';

    /* 4 방향 탐색 */
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m) // 오버플로우 언더플로우
                                                    // 체크
            continue;
        if (graph[nx][ny] == 1 && !visited[nx][ny]) // 만약 방문되어 있지 않다면
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 1 && !visited[i][j]) // 방문 하지 않았다면
            {
                // 디버깅
                cout << i << " : " << j << "  dfs가 시작된다. \n";

                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
}