#include <iostream>
#include <string>
using namespace std;

class Input
{
public:
    char name[20];
    int score = 0;

    void GetInput()
    {
        cout << "Enter name:";
        cin >> name;

        cout << "Enter your age: ";
        cin >> score;
    }
};

int main()
{
    Input input;
    input.GetInput();

    cout << "�̸� : " << input.name << endl;
    cout << "���� : " << input.score << endl;
    cout << input.name << "���� ������ " << input.score << "�� �Դϴ�" << endl;
    return 0;
}