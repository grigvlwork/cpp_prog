#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 10 == 0) cout << n / 10;
    else cout << n / 10 + 1;
    return 0;
}