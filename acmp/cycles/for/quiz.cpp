#include <iostream>
 
using namespace std;
 
int main()
{
    long s, p;
    cin >> s >> p;
    for (long i = 1; i < s; ++i)
    {
        if (i * (s - i) == p)
        {
            cout << i << " " << s - i;
            return 0;
        }
    }
    return 0;
}