#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> N (n, vector<int> (m, 0));
    vector<vector<int>> M (n, vector<int> (m, 0));
    vector<vector<int>> result;

    for (int i = 0; i < n; i++)
    {
        vector<int> row_result; // �� ���� ����� ������ ����
        for (int j = 0; j < m; j++)
        {
            cin >> N[i][j] >> M[i][j];
            row_result.push_back (N[i][j] + M[i][j]); // �� ���Ҹ� ���Ͽ� ���Ϳ� �߰�
        }
        result.push_back (row_result); // �� ����� result ���Ϳ� �߰�
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl; // �� ���� ���� ���� ���ڸ� �߰��Ͽ� ��� ������ ����
    }

    return 0;
}
