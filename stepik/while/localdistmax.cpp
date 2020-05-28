#include <iostream>

using namespace std;

int main() {
  int a, b, c, m = 0, d = 0;
  cin >> a;
  cin >> b;
  cin >> c;
  while (0 != c){
    if ((a < b) && (c < b)){
      if (0 != d){
        if ((0 != m) && (m > d)){
          m = d;
        }
        else{
          m = 0 == m ? d : m;
        }
      }
      d = 1;
    }
    else{
      d = 0 != d ? d + 1 : d;
    }
    a = b;
    b = c;
    cin >> c;
  }
  cout << m;
  return 0;
}