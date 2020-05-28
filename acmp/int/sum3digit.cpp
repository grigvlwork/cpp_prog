#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n / 100 + n % 10 + n / 10 % 10;
    return 0;
}