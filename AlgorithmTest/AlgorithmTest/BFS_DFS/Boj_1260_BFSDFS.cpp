#include <algorithm>
#include <iostream>
#include <memory.h>
#include <queue>
#include <vector>
#define STR ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

vector<int> graph[10002];
vector<int> result_bfs;
vector<int> result_dfs;
bool visited[1002];

int n, m, v, a, b;

void bfs(int temp);
void dfs(int x);
void input();

int main()
{
	STR;
	input();
	bfs(v);
	memset(visited, false, sizeof(visited));
	dfs(v);

	for(int i = 0; i < result_dfs.size(); i++)
	{
		cout << result_dfs[i] << " ";
	}
	cout << "\n";
	for(int i = 0; i < result_bfs.size(); i++)
	{
		cout << result_bfs[i] << " ";
	}

	return 0;
}

////////////////////////////
void input()
{
	cin >> n >> m >> v;
	for(int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for(int i = 1; i <= n; i++)
	{
		sort(graph[i].begin(), graph[i].end()); // 남은 숫자 탐색
	}
}

void bfs(int temp)
{
	queue<int> q;
	q.push(temp);
	visited[temp] = true;

	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		result_bfs.push_back(x);

		for(int i = 0; i < graph[x].size(); i++)
		{
			if(!visited[graph[x][i]])
			{
				q.push(graph[x][i]);
				visited[graph[x][i]] = true;
			}
		}
	}
}

void dfs(int x)
{
	visited[x] = true;
	result_dfs.push_back(x);
	for(int i = 0; i < graph[x].size(); i++)
	{
		if(!visited[graph[x][i]])
		{
			dfs(graph[x][i]);
		}
	}
}