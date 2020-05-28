#include <iostream>

using namespace std;

int main() {
  int n, k, minodd = 0;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> k;
    if((k % 2) != 0){
      if(minodd == 0){
        minodd = k;
      }
      else{
        minodd = minodd > k ? k : minodd;
      }
    }
  }
  cout << minodd;
  return 0;
}