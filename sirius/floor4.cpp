#include <iostream>

using namespace std;

int main()
{
    int n, room;
    int floor[100001] = { 0 };
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> room;
        if (room > 0)
        {
            while (floor[room] > 0) ++room;
            floor[room] = 1;
            cout << room << endl;
        }
        else floor[-room] = 0;
    }
}

