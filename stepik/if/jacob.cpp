#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x, y, mx, my;
    cin >> n >> m >> x >> y;
    if (n > m){
        swap(n, m);
    }
    mx = min(x, n - x);
    my = min(y, m - y);
    cout << min(mx, my);
    return 0;
}