#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    if (n > 1)
    {
        if ((n % 2) == 0)
        {
            cout << n / 2;
        }
        else
        {
            cout << n;
        }
    }
    else
    {
        cout << 0;
    }
    
    
    return 0;
}
