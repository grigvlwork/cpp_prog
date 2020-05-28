#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int velocity, time, remain;
    cin >> velocity >> time;
    remain = abs(velocity * time + 1) % 109;
    if (velocity > 0) cout << remain;
    else cout << 109 - remain;
    return 0;
}

