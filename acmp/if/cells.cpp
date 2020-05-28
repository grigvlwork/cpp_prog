#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int x, y;
    cin >> s;
    x = int(s[0]) - 64;
    y = int(s[1]) - 48;
    if ((x + y) % 2 == 0)
    {
        cout << "BLACK";
    }
    else
    {
        cout << "WHITE";
    }
    return 0;
}
