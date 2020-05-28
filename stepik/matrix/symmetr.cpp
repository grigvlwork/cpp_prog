#include <iostream>

using namespace std;

int main() {
  int n, m;
  bool flag = true;
  cin >> n;
  int a[10][10];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cin >> a[i][j];
    }
  }
  for(int i = 0; (i < (n - 1)) && flag; ++i){
    for(int j = i + 1; (j < n) && flag; ++j){
      if (a[i][j] != a[j][i]){
        flag = false;
      }
    }
  }
  if(flag){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}