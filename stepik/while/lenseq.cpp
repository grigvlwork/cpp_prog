#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n;
  k = 0;
  while (n != 0){
    ++k;
    cin >> n;  
  }
  cout << k;
  return 0;
}