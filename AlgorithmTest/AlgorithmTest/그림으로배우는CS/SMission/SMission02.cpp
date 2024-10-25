#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 사용자 정보를 나타내는 구조체
struct User {
    string name;
    int count;
};

// 퀵소트 함수 선언
void quickSort(vector<User>& arr, int left, int right);
int partition(vector<User>& arr, int left, int right);

int main() {
    // 사용자 객체 초기화
    User user1 = { "홍길동", 5 };
    User user2 = { "임꺽정", 4 };
    User user3 = { "이순신", 3 };
    User user4 = { "나", 1 };
    User user5 = { "짱구", 5 };

    // 사용자 객체를 담을 벡터
    vector<User> arr = { user1, user2, user3, user4, user5 };


    cout << "===== 정렬 전 =====" << endl;
    for (auto& user : arr) {
        cout << "이름: " << user.name << ", count: " << user.count << endl;
    }
    
    
    // 퀵소트 호출
    quickSort(arr, 0, arr.size() - 1);

    cout << "===== 정렬 후 =====" << endl;
    for (auto& user : arr) {
        if (user.name == "나")
        {
            user.count = 5;
        }
        cout << "이름: " << user.name << ", count: " << user.count << endl;
    }

    return 0;
}

// 퀵소트 함수 정의
void quickSort(vector<User>& arr, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

// 분할 함수 정의
int partition(vector<User>& arr, int left, int right) {
    int pivot = arr[right].count; // 피벗을 오른쪽 끝 요소의 count로 설정
    int i = left - 1; // i는 피벗보다 작은 요소의 마지막 인덱스

    for (int j = left; j < right; j++) {
        // 현재 요소가 피벗보다 작거나 같은 경우
        if (arr[j].count < pivot || (arr[j].count == pivot && arr[j].name < arr[right].name)) {
            i++;
            swap(arr[i], arr[j]); // i와 j 요소를 교환
        }
    }
    swap(arr[i + 1], arr[right]); // 피벗을 올바른 위치로 이동
    return i + 1; // 피벗의 최종 위치 반환
}