#include <iostream>

using namespace std;

int main()
{
    int arr[] = {70, 80, 100};
    int avg   = 0;

    for (int i = 0; i < size (arr); i++)
    {
        avg += arr[i];
    }
    

    avg /= size(arr);
    cout << avg << endl;
}