#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n;
  k = n;
  while (n != 0){
    k = k < n ? n : k;
    cin >> n;  
  }
  cout << k;
  return 0;
}