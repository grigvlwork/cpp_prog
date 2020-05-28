#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, t;
  cin >> n;
  vector <int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  t = a[n - 1];
  for(int i = n - 1; i > 0; --i){
    a[i] = a[i - 1];
  }
  a[0] = t;
  for(auto p : a){
    cout << p << " ";
  }
  return 0;
}