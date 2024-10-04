#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int solution (int a, int b, int c, int d)
{
    int           answer = 0;
    map<int, int> cnt;
    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;

    for (auto i : cnt)
    {
        if (i.second == 4)
        {
            answer = max (answer, 1111 * i.first);
        }
        else if (i.second == 3)
        {
            for (auto i2 : cnt)
            {
                if (i2.second == 1)
                {
                    answer = max (answer, (10 * i.first + i2.first) * (10 * i.first + i2.first));
                }
            }
        }
        else if (i.second == 2)
        {
            int second_t = 0;
            for (auto i2 : cnt)
            {
                if (i2.second == 2 && i2.first != i.first)
                {
                    second_t = i2.first;
                    answer   = max (answer, (i.first + second_t) * abs (i.first - second_t));
                }
            }
            if (second_t == 0)
            {
                vector<int> others;
                for (auto i2 : cnt)
                {
                    if (i2.second == 1)
                    {
                        others.push_back (i2.first);
                    }
                }
                answer = max (answer, others[0] * others[1]);
            }
        }
    }

    if (answer == 0)
    {
        answer = min ({a, b, c, d});
    }

    return answer;
}