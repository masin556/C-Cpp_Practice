#include <iostream>
using namespace std;

int main()
{
    string name, grade;
    double credit, temp, sumCredit = 0.0, result = 0.0;

    for (int i = 0; i < 20; i++)
    {
        cin >> name >> credit >> grade;

        if (grade == "P")
            continue;
        
        sumCredit += credit; // P 과목은 계산에서 제외해야 하기에 이 위치

        if (grade == "F")
            continue;
        

        if (grade[0] == 'A')
            temp = 4;
        else if (grade[0] == 'B')
            temp = 3;
        else if (grade[0] == 'C')
            temp = 2;
        else
            temp = 1;

        if (grade[1] == '+')
            temp += 0.5;

        result += credit * temp;
    }

    cout << result / sumCredit;
}
