#include <iostream>

using namespace std;

int sum(int a, int b){
    if(a == 0){
        if(b == 0) return 0;
        else return 1 + sum(a, b - 1);
    }
    else
    {
        return 1 + sum(a - 1, b);
    }
    
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}