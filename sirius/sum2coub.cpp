#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, j, flag = 0;
    int coubes[1];
    for(i = 0; i < 10; ++i) coubes[i] = pow(i + 1, 3);
    cin >> n;
    for(i = 0; i < 10; ++i){
        for(j = i; j < 10; ++j){
            if(n == (coubes[i] + coubes[j])){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    if(flag == 1) 
        cout << coubes[i] << " " << coubes[j];
    else
        cout << "impossible";
    return 0;
}