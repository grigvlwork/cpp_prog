#include <iostream>

using namespace std;

int main()
{
    long n, k3, k5;
    k3 = k5 = 0;
    cin >> n;
    while ((n % 5) != 0) 
    {
        n -= 3;
        ++k3;
    }
    k5 = n / 5;
    cout << k5 << " " << k3;
    return 0;
}