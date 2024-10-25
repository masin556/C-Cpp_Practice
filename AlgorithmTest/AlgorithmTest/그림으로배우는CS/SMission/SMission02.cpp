#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ����� ������ ��Ÿ���� ����ü
struct User {
    string name;
    int count;
};

// ����Ʈ �Լ� ����
void quickSort(vector<User>& arr, int left, int right);
int partition(vector<User>& arr, int left, int right);

int main() {
    // ����� ��ü �ʱ�ȭ
    User user1 = { "ȫ�浿", 5 };
    User user2 = { "�Ӳ���", 4 };
    User user3 = { "�̼���", 3 };
    User user4 = { "��", 1 };
    User user5 = { "¯��", 5 };

    // ����� ��ü�� ���� ����
    vector<User> arr = { user1, user2, user3, user4, user5 };


    cout << "===== ���� �� =====" << endl;
    for (auto& user : arr) {
        cout << "�̸�: " << user.name << ", count: " << user.count << endl;
    }
    
    
    // ����Ʈ ȣ��
    quickSort(arr, 0, arr.size() - 1);

    cout << "===== ���� �� =====" << endl;
    for (auto& user : arr) {
        if (user.name == "��")
        {
            user.count = 5;
        }
        cout << "�̸�: " << user.name << ", count: " << user.count << endl;
    }

    return 0;
}

// ����Ʈ �Լ� ����
void quickSort(vector<User>& arr, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

// ���� �Լ� ����
int partition(vector<User>& arr, int left, int right) {
    int pivot = arr[right].count; // �ǹ��� ������ �� ����� count�� ����
    int i = left - 1; // i�� �ǹ����� ���� ����� ������ �ε���

    for (int j = left; j < right; j++) {
        // ���� ��Ұ� �ǹ����� �۰ų� ���� ���
        if (arr[j].count < pivot || (arr[j].count == pivot && arr[j].name < arr[right].name)) {
            i++;
            swap(arr[i], arr[j]); // i�� j ��Ҹ� ��ȯ
        }
    }
    swap(arr[i + 1], arr[right]); // �ǹ��� �ùٸ� ��ġ�� �̵�
    return i + 1; // �ǹ��� ���� ��ġ ��ȯ
}