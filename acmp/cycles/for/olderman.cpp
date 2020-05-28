#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n, v, s, maxv = -2, maxi = -2;
    cin >> n;
    for (long i = 0; i < n; ++i)
    {
        cin >> v >> s;
        if ((maxv < v) && (s == 1))
        {
            maxv = v;
            maxi = i;
        }
    }
    cout << maxi + 1;
    return 0;
}