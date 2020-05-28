#include <iostream>

using namespace std;

int main()
{
    long x, y;
    cin >> x >> y;
    if ((x == 1) && (y == 1))
    {
        cout << 0;
    }
    else
    {
        if (x == y)
        {
            cout << 2;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}
