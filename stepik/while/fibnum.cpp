#include <iostream>

using namespace std;

int main() {
  int n1, n2, a, i, t, k = -1;
  cin >> a;
  if (a < 2){
    cout << a;
  }
  else{
    n1 = 0;
    n2 = 1;
    i = 0;
    while (n1 <= a){
      t = n2;
      n2 = n1 + n2;
      n1 = t;
      ++i;
      if (a == n1){
        k = i;  
      }
    }
    cout << k;
    }  
  return 0;
}