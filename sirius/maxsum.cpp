#include <cstdlib>
#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int a[301][301];

int main()
{
    int i, j, x1, x2, y1, y2, max_sum=-99999;
    int perimetr_sum, mx1, mx2, my1, my2;
    int m, n;
    x1 = y1 = 0;
    x2 = y2 = 1;
    // cin >> m >> n;
    // for(i = 0; i < m; i++)
    //     for(j = 0; j < n; j++)
    //         cin >> a[i][j];

    m = n = 100;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            a[i][j] = rand() % 10001 * pow(-1, rand());

    if ((m == 2) && (n == 2)){
        cout << a[0][0] + a[0][1] + a[1][0] + a[1][1] << endl;
        cout << 1 << " " << 1 << " " << 2 << " " << 2;
        return 0;    
    }
    mx1 = mx2 = my1 = my2 = -1;
    for(x1 = 0; x1 < m - 1; ++x1){
        for(x2 = 1; x2 < m; ++x2){
            for(y1 = 0; y1 < n - 1; ++y1){
                for(y2 = 1; y2 < n; ++y2){
                    perimetr_sum = 0;
                    for(int i = x1; i <= x2; ++i){
                        if((i == x1) || (i == x2)){
                            for(int j = y1; j <= y2; ++j) 
                                perimetr_sum += a[i][j];
                        }
                        else{
                            perimetr_sum += a[i][y1] + a[i][y2];
                        }
                    }
                    if(perimetr_sum > max_sum){
                        mx1 = x1;
                        mx2 = x2;
                        my1 = y1;
                        my2 = y2;
                        max_sum = perimetr_sum;
                    }
                }
            }
        }
    }
    cout << max_sum << endl;
    cout << mx1 + 1 << " " << my1 + 1 << " " << mx2 + 1 << " " << my2 + 1;
    return 0;
}
