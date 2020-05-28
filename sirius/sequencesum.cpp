#include <iostream>

using namespace std;

int sum_sequence(){
    int a;
    cin >> a;
    if(a == 0){
        return 0;
    }
    else {
        return a + sum_sequence();
    }
}

int main() {
    cout << sum_sequence();
    return 0;
}