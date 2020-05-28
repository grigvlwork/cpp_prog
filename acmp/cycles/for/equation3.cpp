#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d, k = 0;
    vector<int> v;
    cin >> a >> b >> c >> d;
    for (int i = -100; i < 101; ++i)
    {
        if ((a * i * i * i + b * i * i + c * i + d) == 0)
        {
       		v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
    	cout << v[i] << " ";
    }
    return 0;
}