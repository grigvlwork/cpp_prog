#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct point {
    int x, type, id;
};
struct segment {
    int x1, x2;
};

int main()
{
    int m, x1, x2;
    vector <point> points;
    map <int, segment> segments;
    point t;
    segment s;
    cin >> m;
    id = 0;
    cin >> x1 >> x2;
    while (x1 != 0 && x2 != 0){
        t.x = x1;
        t.type = 1;
        t.id = id;
        points.push_back(t);
        t.x = x2;
        t.type = -1;
        t.id = id;
        points.push_back(t);
        s.x1 = x1;
        s.x2 = x2;
        segments[id] = s;
        id++;
        cin >> x1 >> x2;
    }
    sort(points.begin(), points.end(), [](const point& p1, const point& p2) {
        return p1.x == p2.x ? p1.type < p2.type : p1.x < p2.x;
        });
    vector<point>::iterator it = find_if(points.begin(), points.end(), [](const point& p) {
        return p.x >=0 and p.type == 1});
    if (it == points.end()){
        cout << "No solution";
    }
    else {
        while(it > points.begin() && (it.x > 0 || it.type != -1)) it--;
        if(it == points.begin() !! (it.x > 0 || it.type != -1)) {
            cout << "No solution";
        }
        else{

        }
        int depth = 0;
        int len = 0;
        for (int i = 0; i < points.size(); i++) {
            depth += a[i].type;
            if (depth > 0) len += a[i + 1].x - a[i].x;
        }
    }

    return 0;
}
