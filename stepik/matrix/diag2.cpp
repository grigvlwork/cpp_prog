#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[1000][1000];
  int b[1000][1000];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
      b[j][i] = a[i][j];
    }
  }
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}