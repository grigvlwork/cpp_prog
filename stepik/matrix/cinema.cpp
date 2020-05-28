#include <iostream>

using namespace std;

int main() {
  int n, m, k, t;
  cin >> n >> m;
  int a[20][20];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
    }
  }
  cin >> k;
  for(int i = 0; i < n; ++i){
    t = 0;
    for(int j = 0; j < m; ++j){
      if(a[i][j] == 0){
        ++t;
      }
      else{
        if(t >= k){
          cout << i + 1;
          return 0;
        }
        t = 0;
      }
    }
    if(t >= k){
      cout << i + 1;
      return 0;
    }
  }
  cout << 0;
  return 0;
}