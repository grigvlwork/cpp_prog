#include <iostream>
#include <vector>

using namespace std;

struct point{
    int x, type;
};

int main()
{
    int n;
    cin >> n;
    vector<point> a(n * 2);
    for (int i = 0; i < n * 2; i += 2){
        cin >> a[i].x >> a[i+1].x;
        a[i].type = 1;
        a[i + 1].type = -1;
    }
    sort(a.begin(), a.end(), [](const point& p1, const point& p2) {
         return p1.x == p2.x ? p1.type < p2.type : p1.x < p2.x;
         });
    int depth = 0;
    int len = 0;
    for (int i = 0; i < n * 2; i++){
        depth += a[i].type;
        if (depth > 0) len += a[i + 1].x - a[i].x;
     }
    cout << len;
    return 0;
}
