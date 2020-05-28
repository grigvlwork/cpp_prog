#include <iostream>

using namespace std;

int main() {
    long long boys, apples;
    cin >> boys >> apples;
    cout << apples / boys << " " << apples % boys << " ";
    if ((apples % boys) == 0) cout << 0;
    else cout << (boys - apples % boys);
    return 0;
}