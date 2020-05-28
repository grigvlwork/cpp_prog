#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[30][30];
  for(int i = 0; i < n; ++i){
    if((i % 2) == 0){
      for(int j = 0; j < m; ++j){
        a[i][j] = i * m + j + 1;
      }
    }
    else{
      for(int j = 0; j < m; ++j){
        a[i][m - j - 1] = i * m + j + 1;
      }
    }
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cout.width(4);
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}