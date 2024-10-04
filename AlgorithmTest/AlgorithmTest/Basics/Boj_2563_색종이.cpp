#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 색종이의 수를 입력받습니다.
    int n;
    cin >> n;

    // 색종이의 위치를 저장할 벡터를 생성합니다.
    vector<pair<int, int>> papers;
    for (int i = 0; i < n; i++)
    {
        // 색종이의 왼쪽 아래 꼭짓점의 좌표를 입력받습니다.
        int x, y;
        cin >> x >> y;

        // 색종이의 위치를 벡터에 저장합니다.
        papers.push_back ({x, y});
    }

    // 100x100 크기의 도화지를 생성합니다.
    vector<vector<int>> board (101, vector<int> (101, 0));

    // 색종이를 도화지에 붙입니다.
    for (auto paper : papers)
    {
        // 색종이의 왼쪽 아래 꼭짓점의 좌표를 가져옵니다.
        int x = paper.first;
        int y = paper.second;

        // 색종이의 오른쪽 위 꼭짓점의 좌표를 구합니다.
        int x2 = x + 9;
        int y2 = y + 9;

        // 색종이를 도화지에 붙입니다.
        for (int i = x; i <= x2; i++)
        {
            for (int j = y; j <= y2; j++)
            {
                board[i][j] = 1;
            }
        }
    }

    // 도화지에 붙은 색종이의 넓이를 구합니다.
    int area = 0;
    for (auto row : board)
    {
        for (auto el : row)
        {
            if (el == 1)
            {
                area++;
            }
        }
    }

    // 도화지에 붙은 색종이의 넓이를 출력합니다.
    cout << area << endl;

    return 0;
}

/*
    이 코드는 다음과 같이 동작합니다
        .

    1. 색종이의 수를 입력받습니다.
    2. 색종이의 위치를 저장할 벡터를 생성합니다.
    3. 색종이의 위치를 벡터에 저장합니다.
    4. 100x100 크기의 도화지를 생성합니다.
    5. 색종이를 도화지에 붙입니다.
    6. 도화지에 붙은 색종이의 넓이를 구합니다.
    7. 도화지에 붙은 색종이의 넓이를 출력합니다.

*/