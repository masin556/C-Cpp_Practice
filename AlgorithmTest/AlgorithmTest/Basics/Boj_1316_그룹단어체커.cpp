#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �׷� �ܾ����� ���θ� Ȯ���ϴ� �Լ�
bool bisGroupWord (const string& word)
{
    vector<bool> bVisited (26, false); // ���ĺ��� �� ���ڿ� ���� �湮 ���� �迭

    for (int i = 0; i < word.length(); ++i)
    {
        char currentChar = word[i];

        // ���� ���ڰ� ������ ������ ���� �ְ� �ٷ� �� ���ڿ� �ٸ� ���
        if (bVisited[currentChar - 'a' /*97*/] && word[i - 1] != currentChar)
        {
            return false; // �׷� �ܾ �ƴ�
        }

        bVisited[currentChar - 'a'] = true; // ���� ���ڸ� �湮�ߴٰ� ǥ��
    }

    return true; // �׷� �ܾ���
}

int main()
{
    int N;
    cin >> N;

    int groupWordCnt = 0; // �׷� �ܾ��� ����

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
