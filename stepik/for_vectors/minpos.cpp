#include <iostream>

using namespace std;

int main() {
  int n, k, minpos = -1;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> k;
    if(k > 0){
      if(minpos == -1){
        minpos = k;
      }
      else{
        minpos = minpos > k ? k : minpos;
      }
    }
  }
  cout << minpos;
  return 0;
}