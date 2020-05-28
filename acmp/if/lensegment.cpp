#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2, len;
    cin >> x1 >> y1 >> x2 >> y2;
    len = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << round(len * 10000) / 10000;
    return 0;
}