#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, e, f, x, y, det, detx, dety, k, n;
  cin >> a >> b >> c >> d >> e >> f;
  det = a * d - b * c;
  if (det != 0){
    x = (e * d - b * f) / (a * d - b * c );
    y = (a * f - e * c) / (a * d - b * c );
    cout << 2 << " " << x << " " << y;
  }
  else
  {
    detx = e * d - b * f;
    dety = a * f - e * c;
    if ((detx == 0) && (dety == 0)){
      if ((a == 0) && (b == 0) && (c == 0) && (d == 0)){
        if((e != 0) || (f != 0)){
          cout << 0;
        }
        else{
          cout << 5;
        }
      }
      else{
        if((a == 0) && (c == 0)){
          if(b != 0){
            y = e / b;
          }
          else{
            y = f / d;
          }
          cout << 4 << " " << y;
        }
        else{
          if((b ==0) && (d == 0)){
            if(a != 0){
              x = e / a;
            }
            else {
              x = f / c;
            }
            cout << 3 << " " << x; 
          }
          else{
            if(b != 0){
              n = e / b;
              k = -a / b;
            }
            else{
              n = f / d;
              k = -c / d;
            }
            cout << 1 << " " << k << " " << n;
          }
        }
      }
    }
    else{
      cout << 0;
    }
  } 
  return 0;
}