#include <iostream>

using namespace std;

int main()
{
    int k, m, n;
    cin >> k >> m >> n;
    int res = 0;
    if (n<k) {
        res = 2 * m;
    }
    else {
        res = 2 * n / k * m;
        if (2 * n % k !=0)
            res += m;
    }
    cout<<res;
    return 0;
}
