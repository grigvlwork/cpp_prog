#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k, l, r;
  cin >> n >> k;
  vector <char> a(n);
  for(int i = 0; i < n; ++i){
    a[i] = 'I';
  }
  for(int i = 0; i < k; ++i){
    cin >> l >> r;
    for(int j = l - 1; j <= r - 1; ++j){
      a[j] = '.';
    }
  }
  for(int i = 0; i < n; ++i){
    cout << a[i];
  }
  return 0;
}