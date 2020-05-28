//(((self.row == new_r) and (self.col != new_c)) or 
//                    ((self.row != new_r) and (self.col == new_c)) or
//                    (abs(self.row - new_r) == abs(self.col - new_c)))

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n, t, flag = 1;
  vector <int> a(16);
  for(int i = 0; i < 16; ++i){
    cin >> a[i];
  }
  for(int i = 0; (i < 13) && flag; i += 2){
    for(int j = i + 2; (j < 15) && flag; j += 2){
      if(((a[i] == a[j]) && (a[i + 1] != a[j + 1])) ||
         ((a[i] != a[j]) && (a[i + 1] == a[j + 1])) ||
         (abs(a[i] - a[j]) == abs(a[i + 1] - a[j + 1]))){
        flag = 0; 
      }
    } 
  }
  if(flag){
    cout << "NO";
  } 
  else{
    cout << "YES";
  }
  return 0;
}