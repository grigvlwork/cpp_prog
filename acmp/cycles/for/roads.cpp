#include <iostream>

using namespace std;

int main()
{
    long s = 0, n, r;
    cin >> n;
    for (long i = 0; i < n * n; ++i)
    {
        cin >> r;
        s += r;
    }
    cout << s / 2;
    return 0;
}