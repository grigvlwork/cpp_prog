#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, r1, x2, y2, r2, len;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    len = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if ((len < abs(r2 - r1)) || (len > (r2 + r1)))
    {
        cout << "NO";    
    }
    else
    {
        cout << "YES";
    }
    return 0;
}