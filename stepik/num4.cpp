#include <iostream>

using namespace std;

int main() {
    int n, t, c, d, e;
    cin >> n;
    t = n / 1000;
    e = n % 10;
    d = n / 10 % 10;
    c = n % 1000 / 100;
    cout << (1 - t + e) * (1 - c + d) * (1 + t - e) * (1 + c - d);
    return 0;
}