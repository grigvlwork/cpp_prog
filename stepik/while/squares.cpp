#include <iostream>

using namespace std;

int main() {
  int i, n;
  cin >> n;
  i = 1;
  while ((i * i) <= n){
    cout << i * i << " ";
    ++i;
  }
  return 0;
}