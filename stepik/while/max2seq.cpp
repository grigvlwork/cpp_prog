#include <iostream>

using namespace std;

int main() {
  int n, k, m2;
  cin >> n;
  k = n;
  cin >> n;
  if (n > k){
    m2 = k;
    k = n;
  }
  else{
    m2 = n;
  }
  while (n != 0){
    cin >> n;
    if (n > k){
      m2 = k;
      k = n;
    }
    else{
      m2 = n > m2 ? n : m2;
    }
  }
  cout << m2;
  return 0;
}