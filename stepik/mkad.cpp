#include <iostream>

using namespace std;

int main() {
    int velocity, time, remain;
    cin >> velocity >> time;
    remain = (velocity * time % 109 + 109) % 109;
    cout << remain;
    return 0;
}