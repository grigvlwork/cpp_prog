#include <iostream>

using namespace std;

int main() {
  int n, m, x, y, t;
  cin >> n >> m;
  int a[100][100];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
    }
  }
  cin >> x >> y;
  for(int i = 0; i < n; ++i){
    t = a[i][x];
    a[i][x] = a[i][y];
    a[i][y] = t;
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}