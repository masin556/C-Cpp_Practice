/* https://school.programmers.co.kr/learn/courses/30/lessons/42748 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution (vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    vector<int> temp; // 임시로 자른 배열을 담을 벡터

    for (int i = 0; i < commands.size(); i++)
    {

        // commands[i][0]부터 commands[i][1]까지의 부분 배열을 temp에 복사
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
        {
            temp.push_back (array[j]);
        }

        // temp 벡터를 정렬
        sort (temp.begin(), temp.end());

        // 정렬된 temp 배열에서 commands[i][2]-1 번째 값을 answer에 추가
        answer.push_back (temp[commands[i][2] - 1]);
    }

    /*
    for (int i = 0; i < commands.size(); i++) 
    {
        temp = array;
        sort (temp.begion() + commands[i][0] - 1, temp.begin() + commands[i][1]);
        answer.push_back(temp[commands[i][0] + commands[i][2] - 2]);
    }
    */

    return answer;
}

void FPrint(vector<int> array1, vector<vector<int>> commands, vector<int> answer)
{
    vector<int> t = solution (array1, commands);
    
    if (t == answer)
    {
        for (int i = 0; i < t.size(); i++)
        {
            cout << t[i] << " ";
        }
    }
    else
    {
        cout << "wrong" << endl;
    }
}

int main()
{
    FPrint ({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}}, {5, 6, 3});

    return 0;
}