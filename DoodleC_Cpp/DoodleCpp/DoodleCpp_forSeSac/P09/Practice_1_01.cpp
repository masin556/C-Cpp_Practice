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

    cout << "이름 : " << input.name << endl;
    cout << "점수 : " << input.score << endl;
    cout << input.name << "님의 점수는 " << input.score << "점 입니다" << endl;
    return 0;
}