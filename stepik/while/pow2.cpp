#include <iostream>

using namespace std;

int main() {
  int i, n;
  cin >> n;
  i = 1;
  while (i <= n){
    cout << i << " ";
    i = i * 2;
  }
  return 0;
}