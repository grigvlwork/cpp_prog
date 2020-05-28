#include <iostream>

using namespace std;

int main()
{
    long n, s;
    cin >> n;
    if (n > 1)
    {
        cout << (1 + n) * n / 2;
    }
    else
    {
        cout << (1 + n) * (2 - n) / 2;
    }
    return 0;
}