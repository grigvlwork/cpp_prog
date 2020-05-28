#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n % 2 == 0 ? n / 2 : n;
    cout << n;
    return 0;
}