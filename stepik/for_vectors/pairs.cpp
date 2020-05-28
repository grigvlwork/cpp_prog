#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, t, pairs = 0;
  cin >> n;
  vector <int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < n - 1; ++i){
    for(int j = i + 1; j < n; ++j){
      if (a[i] == a[j]){
        ++pairs;
      }
    }  
  }
  cout << pairs;
  return 0;
}