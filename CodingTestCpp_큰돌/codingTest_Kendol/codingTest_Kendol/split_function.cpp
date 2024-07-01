#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    long long pos = 0;
    string token = "";
    
    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main()
{
    string s = "안녕하시오 신충식은 킹갓제너럴 천재입니다. 정말입니다!",
           d = " ";
    vector<string> a = split(s, d);

    for (string b : a)
        cout << b << "\n";
}
