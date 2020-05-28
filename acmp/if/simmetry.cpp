#include <iostream>

using namespace std;

struct point
{
    long x, y;
};

int main()
{
    point p1, p2, a;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> a.x >> a.y;
    if (p1.x == p2.x)
    {
        cout << 2 * p1.x - a.x << " " << a.y;
    }
    else
    {
        cout << a.x << " "  << 2 * p1.y - a.y;
    }
    return 0;
}