#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n, m = 40000, s = 0, k;
    cin >> n;
    for (long i = 0; i < n; ++i)
    {
        cin >> k;
        s = max(s, k);
        m = min(m, k);
    }
    cout << m << " " << s;
    return 0;
}