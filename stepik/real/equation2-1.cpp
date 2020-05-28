#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
double discr(double a, double b, double c)
{
    return b * b - 4 * a * c;
}
 
int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    if ((a == 0) && (b == 0) && (c == 0))
    {
        cout << 3;
    }
    else
    {
        if ((a == 0) && (b == 0) && (c != 0))
        {
            cout << 0;
        }
        else
        {
            if ((a == 0) && (b != 0))
            {
                cout << 1 << endl;
                cout << -c / b;
            }
            else
            {
                if (discr(a, b, c) < 0)
                {
                    cout << 0;    
                }
                else if (discr(a, b, c) == 0)
                {
                    cout << 1 << endl;    
                    cout << (-b  + sqrt(discr(a, b, c))) / (2 * a);
                }
                else
                {
                    cout << 2 << endl;  
                    x1 = (-b  - sqrt(discr(a, b, c))) / (2 * a);
                    x2 = (-b  + sqrt(discr(a, b, c))) / (2 * a);
                    cout << min(x1, x2) << endl;    
                    cout << max(x1, x2) << endl; 
                }
            }
        }
    }
    return 0;
}