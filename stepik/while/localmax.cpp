#include <iostream>

using namespace std;

int main() {
  int a, b, c, k = 0;
  cin >> a;
  cin >> b;
  cin >> c;
  while (0 != c){
    if ((a < b) && (c < b)){
      ++k;
    }
    a = b;
    b = c;
    cin >> c;
  }
  cout << k;
  return 0;
}