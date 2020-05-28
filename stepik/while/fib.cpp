#include <iostream>

using namespace std;

int main() {
  int n, a, b, i, t;
  cin >> n;
  if (n < 2){
    cout << n;
  }
  else{
    a = 0;
    b = 1;
    i = 1;
    while (i < n){
      t = b;
      b = a + b;
      a = t;
      ++i;
    }
    cout << b;
    }  
  return 0;
}