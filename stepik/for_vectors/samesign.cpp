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
  for(int i = 1; i < n; ++i){
    if((a[i] * a[i - 1]) > 0){
      if(a[i - 1] <= a[i]){
        cout << a[i - 1] << " " << a[i];
      }
      else{
        cout << a[i] << " " << a[i - 1];
      }
      return 0;
    }
  }
  return 0;
}