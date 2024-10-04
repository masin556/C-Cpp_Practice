#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end());

    for (const auto& point : points)
    {
        cout << point.first << " " << point.second << endl;
    }

    return 0;
}