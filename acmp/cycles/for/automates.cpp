#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long long n, k, m;
    cin >> k;
    for (long i = 0; i < k; ++i)
    {
        cin >> n >> m;
        cout << 19 * m + (n + 239) * (n + 366) / 2 << endl;
    }
    return 0;
}