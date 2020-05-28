#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double x, p2, s;
  long n;
  cin >> x;
  s = p2 = 0;
  n = 0;
  while(0 != x){
    s += x;
    p2 += x * x;
    ++n;
    cin >> x;
  }
  cout << setprecision(11) << fixed;
  cout << sqrt((p2 - s * s / n) / (n - 1));
  return 0;
}