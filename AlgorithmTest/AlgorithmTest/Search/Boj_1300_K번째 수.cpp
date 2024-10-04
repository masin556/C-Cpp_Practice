/* https://www.acmicpc.net/problem/1300
이분탐색으로 실시
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long LL;

long long FBinary_Search (long long n, long long k)
{
    long long low = 1, high = n * n, ans = 0, mid, small;

    // 이진 탐색 시작
    while (low <= high)
    {
        mid   = (low + high) / 2;
        small = 0;

        // mid보다 작거나 같은 값의 개수 계산
        for (long long i = 1; i <= n; i++)
        {
            small += min (mid / i, n); // 각 행에서 mid 이하의 값 개수
            /* 
                temp = mid / i;
                if (temp > n) temp = n;
                small += temp;
            */

        }

        // 찾은 값이 k보다 작은 경우, 범위를 앞으로 당김
        if (small < k)
        {
            low = mid + 1;
        }
        else if (small >= k)
        {
            ans  = mid;
            high = mid - 1;
        }
    }

    return ans;
}


int main()
{
    ios::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);

    long long n, k, ans;
    cin >> n >> k;

    ans = FBinary_Search (n, k);

    cout << ans << endl;

    return 0;
}

