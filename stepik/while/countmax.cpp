#include <iostream>

using namespace std;

int main() {
  int n, k, a;
  cin >> n;
  k = n;
  a = 0;
  while (n != 0){
    if(n == k){
        ++a;
    }
    else{
        if(k < n){
            k = n;
            a = 1;
        }
    }
    cin >> n;
  }
  cout << a;
  return 0;
}