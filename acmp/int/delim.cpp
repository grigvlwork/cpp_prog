#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a < b) swap(a, b);
    if (a % b == 0) cout << 1;
    else cout << 2;
    return 0;
}