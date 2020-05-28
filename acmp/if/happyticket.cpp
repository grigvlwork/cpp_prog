#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    b = a / 1000;
    c = a % 1000;
    if ((b / 100 + (b / 10) % 10 + b % 10) == 
        (c / 100 + (c / 10) % 10 + c % 10))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}