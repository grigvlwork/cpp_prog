#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if((n / 1000 == n % 10) && (n / 100 % 10 == n / 10 % 10))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
