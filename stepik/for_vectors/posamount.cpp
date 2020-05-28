#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k = 0;
  cin >> n;
  vector <int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < n; ++i){
    if(a[i] > 0){
      ++k;
    }
  }
  cout << k;
  return 0;
}