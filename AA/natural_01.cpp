#include <iostream>
using namespace std;

int main()
{
    int n,m,result = 0;
    cin>>n>>m;
    for (int i=1;i<= n;i++)
    {
        if(i%m==0)
        {
            result+=i;
        }
    }
    cout << result << endl;
    return 0;   
}


