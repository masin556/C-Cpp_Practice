/* https://www.acmicpc.net/problem/10988 */

#include <iostream>

int main()
{
    std::string word, temp;
    std::cin >> word;
    temp = word;

    reverse (word.begin(), word.end());

    if (word == temp)
    {
        std::cout << 1 << '\n';
    }
    else
    {
        std::cout << 0 << '\n';
    }
    return 0;
}