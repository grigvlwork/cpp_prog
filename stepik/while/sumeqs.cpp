#include <iostream>

using namespace std;

int main() {
  int n, a, b, k = 1;
  cin >> a;
  cin >> b;
  n = 1;
  while (0 != b){
    if (a == b){
      ++n;
      k = k < n ? n : k;
    }
    else{
      n = 1;
    }
    a = b;
    cin >> b;
  }
  cout << k;
  return 0;
}