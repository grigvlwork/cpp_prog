#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x, s;
  long k;
  cin >> x;
  s = 0;
  k = 0;
  while(0 != x){
    s += x;
    ++k;
    cin >> x;
  }
  cout << setprecision(11) << fixed;
  cout << s / k;
  return 0;
}