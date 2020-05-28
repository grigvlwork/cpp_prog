#include <iostream>

using namespace std;

int main() {
  long long p, x, y, s;
  cin >> p >> x >> y;
  s = x * 100 + y + p * (x * 100 + y) / 100;
  cout << s / 100 << " " << s % 100;
  return 0;
}