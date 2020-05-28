#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, t, k;
  cin >> n;
  vector <int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < n; ++i){
    k = 0;
    for(int j = 0; j < n; ++j){
      if (a[i] == a[j]){
        ++k;
      }
    }  
    if(k == 1){
      cout << a[i] << " ";
    }
  }
  return 0;
}