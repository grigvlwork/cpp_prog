#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n, k, s = 0;
    cin >> n;
    for (long i = 0; i < n; ++i)
    {
        cin >> k;
        s += k;
    }
    cout << min(s, n - s);
    return 0;
}