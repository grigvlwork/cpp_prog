#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  double a, b, c, d, x1, x2;
  cin >> a >> b >> c;
  d = b * b - 4 * a * c;
  if (0 == d){
    cout << (-b / (2 * a));
  }
  else{
    if (d > 0){
      x1 = ((-b - sqrt(d)) / (2 * a));
      x2 = ((-b + sqrt(d)) / (2 * a));
      cout << min(x1, x2) << " ";
      cout << max(x1, x2);
    }
  }
  return 0;
}