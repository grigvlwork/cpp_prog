#include <iostream>

using namespace std;

int main() {
  int n, m, posx = 0, posy = 0;
  int a[100][100];
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
      if(a[posx][posy] < a[i][j]){
        posx = i;
        posy = j; 
      }
    }
  }
  cout << posx << " " << posy;
  return 0;
}