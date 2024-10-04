#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 그룹 단어인지 여부를 확인하는 함수
bool bisGroupWord (const string& word)
{
    vector<bool> bVisited (26, false); // 알파벳의 각 문자에 대한 방문 여부 배열

    for (int i = 0; i < word.length(); ++i)
    {
        char currentChar = word[i];

        // 현재 문자가 이전에 등장한 적이 있고 바로 앞 문자와 다른 경우
        if (bVisited[currentChar - 'a' /*97*/] && word[i - 1] != currentChar)
        {
            return false; // 그룹 단어가 아님
        }

        bVisited[currentChar - 'a'] = true; // 현재 문자를 방문했다고 표시
    }

    return true; // 그룹 단어임
}

int main()
{
    int N;
    cin >> N;

    int groupWordCnt = 0; // 그룹 단어의 개수

    for (int i = 0; i < N; ++i)
    {
        string word;
        cin >> word;

        if (bisGroupWord (word))
        {
            groupWordCnt++;
        }
    }

    cout << groupWordCnt << endl;

    return 0;
}
