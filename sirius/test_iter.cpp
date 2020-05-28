#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x, type, id;
};
struct segment {
    int x1, x2;
};

bool f_sort (const segment& s1, const segment& s2) {
    return s1.x1 < s2.x1;
};

bool f_if(const point& p) {
    return (p.x >=0) && (p.type == 1);
}
int main()
{
    int m, x1, x2, current_edge;
    vector <segment> segs;
    vector <int> chosen;
    segment max_seg, t;
    max_seg.x1 = 0;
    max_seg.x2 = 0;
    unsigned int cur_seg, max_id;
    cin >> m;
    cin >> x1 >> x2;
    while ((x1 != 0) || (x2 != 0)){
        if((x1 >= 0 && x1 < m) || (x2 > 0 && x2 <= m)){
            t.x1 = x1;
            t.x2 = x2;
            segs.push_back(t);
        }
        cin >> x1 >> x2;
    }
    if (segs.size() == 0){
        cout << "No solution";
    }
    else{
        sort(segs.begin(), segs.end(), f_sort);
        current_edge = 0;
        cur_seg = 0;
        while ((current_edge < m) && (cur_seg < segs.size()))  {
            max_seg.x1 = 0;
            max_seg.x2 = 0;
            max_id = 0;
            while((segs[cur_seg].x1 <= current_edge) && (cur_seg < segs.size())){
                if (max_seg.x2 < segs[cur_seg].x2) {
                    max_seg = segs[cur_seg];
                    max_id = cur_seg;
                }
                cur_seg++;
            }
            if((cur_seg == segs.size()) && (max_seg.x2 < m)) {
                cout << "No solution";
            }
            else{
                chosen.push_back(max_id);
                current_edge = max_seg.x2;
            }
        }
        if(chosen.size() == 0){
            cout << "No solution";
        }
        else{
            cout << chosen.size() << endl;
            for(unsigned int i = 0; i < chosen.size(); i++){
                cur_seg = chosen[i];
                cout << segs[cur_seg].x1 << " " << segs[cur_seg].x2 << endl;
            }
        }
    }
    return 0;
}
