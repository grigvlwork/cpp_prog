#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<long> a(3), b(3);
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        cout << "Boxes are equal";
    }
    else if ((a[0] >= b[0]) && (a[1] >= b[1]) && (a[2] >= b[2]))
    {
        cout << "The first box is larger than the second one";
    }
    else if ((a[0] <= b[0]) && (a[1] <= b[1]) && (a[2] <= b[2]))
    {
        cout << "The first box is smaller than the second one";
    }
    else
    {
        cout << "Boxes are incomparable";
    }
    return 0;
}