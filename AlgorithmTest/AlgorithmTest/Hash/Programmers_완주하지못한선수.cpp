#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// �ؽ� �˰����� ����Ͽ� �������� ���� ���� ã��
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    // �ؽ� ���� ����Ͽ� ������ ��Ͽ� �ִ� �� �̸��� ���� �󵵸� ���
    unordered_map<string, int> hash_map;

    // ������ ��Ͽ� �ִ� �� �̸��� ���� �󵵸� ���
    for (const auto& name : participant) {
        hash_map[name]++;
    }

    // ������ ��Ͽ� �ִ� �� �̸��� ���� �󵵸� ����
    for (const auto& name : completion) {
        hash_map[name]--;
    }

    // ���� �󵵰� 1�� �̸��� ����
    for (const auto& pair : hash_map) {
        if (pair.second== 1) {
            answer = pair.first;
            break;
        }
    }

    return answer;
}

int main() {
    // �׽�Ʈ�� ���� �Է� �ޱ�
    int n, m;
    cout << "������ ��: ";
    cin >> n;

    vector<string> participant(n);
    cout << "������ �̸� �Է�: ";
    for (int i = 0; i < n; ++i) {
        cin >> participant[i]; // ["leo", "kiki", "eden"]
    }

    cout << "������ ��: ";
    cin >> m;

    vector<string> completion(m);
    cout << "������ �̸� �Է�: ";
    for (int i = 0; i < m; ++i) {
        cin >> completion[i];
    }

    // �Լ� ȣ�� �� ��� ���
    string result = solution(participant, completion);
    cout << "�������� ���� ����: " << result << endl;

    return 0;
}