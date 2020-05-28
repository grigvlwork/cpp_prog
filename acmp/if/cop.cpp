#include <iostream>

using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    if ((n == 1) && (m == 1))
    {
        cout << 4;
        return 0;
    }
    if ((n % 2) == (m % 2) )
    {
        cout << n  * (m + 1) + m * (n + 1) + n / 2 + m / 2;    
    }
    else if (((n % 2) == 0) && ((m % 2) == 1))
    {
        cout << m * (n + 2) + n * (m + 2) + m / 2 * 2;    
    }
    else if (((n % 2) == 1) && ((m % 2) == 0))
    {
        cout << m * (n + 2) + n * (m + 2) + n / 2 * 2;    
    }
    return 0;
}
