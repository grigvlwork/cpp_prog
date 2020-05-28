#include <iostream>

using namespace std;

int main() {
  long long p, x, y, s, k, i;
  cin >> p >> x >> y >> k;
  i = 1;
  while (i <= k){
    s = x * 100 + y + p * (x * 100 + y) / 100;
    x = s / 100;
    y = s % 100;
    ++i;
  }
  cout << s / 100 << " " << s % 100;
  return 0;
}