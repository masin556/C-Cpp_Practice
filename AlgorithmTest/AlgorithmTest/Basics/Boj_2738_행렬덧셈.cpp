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
        vector<int> row_result; // 각 행의 결과를 저장할 벡터
        for (int j = 0; j < m; j++)
        {
            cin >> N[i][j] >> M[i][j];
            row_result.push_back (N[i][j] + M[i][j]); // 각 원소를 더하여 벡터에 추가
        }
        result.push_back (row_result); // 행 결과를 result 벡터에 추가
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl; // 각 행의 끝에 개행 문자를 추가하여 출력 형식을 정리
    }

    return 0;
}
