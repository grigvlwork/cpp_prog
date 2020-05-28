#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, e, f, x, y;
  cin >> a >> b >> c >> d >> e >> f;
  x = (e * d - b * f) / (a * d - b * c );
  y = (a * f - e * c) / (a * d - b * c );
  cout << x << " " << y;
  return 0;
}