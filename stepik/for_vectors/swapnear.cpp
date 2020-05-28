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
  for(int i = 1; i < n; i += 2){
    t = a[i];
    a[i] = a[i - 1];
    a[i - 1] = t;
  }
  for(auto p : a){
    cout << p << " ";
  }
  return 0;
}