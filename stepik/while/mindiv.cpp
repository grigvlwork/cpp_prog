#include <iostream>

using namespace std;

int main() {
  int i, n;
  cin >> n;
  i = 2;
  while (n % i != 0){
    ++i;
  }
  cout << i;
  return 0;
}