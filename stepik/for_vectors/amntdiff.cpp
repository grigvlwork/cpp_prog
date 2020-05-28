#include <iostream>

using namespace std;

int main() {
  int n, k, x, amount = 1;
  cin >> n >> x;
  for(int i = 1; i < n; ++i){
    cin >> k;
    if(k != x){
      ++amount;
      x = k;
    }
  }
  cout << amount;
  return 0;
}