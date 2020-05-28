#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (abs(a) % abs(b) == 0)
    {
        cout << 0;
    }
    else
    {
        if ((a > 0) && (b > 0))
        {
            cout << a % b;
        }
        else if ((a > 0) && (b < 0))
        {
            cout << a % (-b);
        }
        else if ((a < 0) && (b < 0))
        {
            cout << (-a / (-b) + 1) * (-b) + a;
        }
        else if ((a < 0) && (b > 0))
        {
            cout << (-a / b + 1) * b + a;
        }
    }
    return 0;
}