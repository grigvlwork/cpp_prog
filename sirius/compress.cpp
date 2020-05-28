#include <iostream>

using namespace std;

int main()
{
    int sequence[1001];
    long long t = 1, t1;
    int n, a, counter = 0, next, i, index, part_sum, flag;
    cin >> n >> a;
    next = 0;
    t = 1;
    while (next <= n)
    {
        for(i = 0; i < next; ++i) sequence[i] = 0;
        index = 0;
        part_sum = 0;
        t1 = t;
        flag = -1;
        while (t1 > 0)
        {
            sequence[index] = t1 % (a + 1);
            part_sum += sequence[index];
            if (sequence[index] == 0) flag = 1;
            // cout << sequence[index];
            ++index;
            t1 = t1 / (a + 1);
        }
        if ((part_sum == n) and (flag == -1)) ++counter;
        // cout << endl;
        ++t;
        if (next < index) next = index;
    }
    cout << counter;
    return 0;
}