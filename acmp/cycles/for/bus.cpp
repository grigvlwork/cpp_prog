#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n, h;
    cin >> n;
    for (long i = 0; i < n; ++i)
    {
        cin >> h;
        if (h <= 437)
        {
            cout << "Crash " << i + 1;
            return 0; 
        }
    }
    cout << "No crash";
    return 0;
}