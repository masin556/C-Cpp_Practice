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

    // �����
    cout << x << " : " << y << '\n';

    /* 4 ���� Ž�� */
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m) // �����÷ο� ����÷ο�
                                                    // üũ
            continue;
        if (graph[nx][ny] == 1 && !visited[nx][ny]) // ���� �湮�Ǿ� ���� �ʴٸ�
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
            if (graph[i][j] == 1 && !visited[i][j]) // �湮 ���� �ʾҴٸ�
            {
                // �����
                cout << i << " : " << j << "  dfs�� ���۵ȴ�. \n";

                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
}