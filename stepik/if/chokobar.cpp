#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (k <= n * m) 
    {
        if (((k % n) == 0) || ((k % m) ==0)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}