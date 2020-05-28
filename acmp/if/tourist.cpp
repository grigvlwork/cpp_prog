#include <iostream>

using namespace std;

struct tent
{
    long c, w;
};

int main()
{
    long k, w;
    tent t[3];
    cin >> k >> w;
    for (int i = 0; i < 3; ++i)
    {
        cin >> t[i].w >> t[i].c;    
    }
    if (((t[0].c >= k) && (t[0].w <= w)) ||
        ((t[1].c >= k) && (t[1].w <= w)) ||
        ((t[2].c >= k) && (t[2].w <= w)) ||
        (((t[0].c + t[1].c) >= k) && ((t[0].w + t[1].w) <= w)) ||
        (((t[0].c + t[2].c) >= k) && ((t[0].w + t[2].w) <= w)) ||
        (((t[1].c + t[2].c) >= k) && ((t[1].w + t[2].w) <= w)) ||
        (((t[0].c + t[1].c + t[2].c) >= k) && ((t[0].w + t[1].w + t[2].w) <= w)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}