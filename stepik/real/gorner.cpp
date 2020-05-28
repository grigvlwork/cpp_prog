#include <iostream>
//#include <iomanip>

using namespace std;

int main() {
  double p, x, a;
  int n;
  cin >> n >> x >> a;
  p = a;
  for(int i = 0; i < n; ++i){
    cin >> a;
    p = p * x + a;
  }
  //cout << setprecision(11) << fixed;
  cout << p;
  return 0;
}