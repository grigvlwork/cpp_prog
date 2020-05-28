#include <iostream>
#include <cmath>

using namespace std;

double discr(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a == 0) && (b == 0) && (c == 0))
    {
        cout << -1;
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
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(4);
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
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(4);
                    cout << (-b  + sqrt(discr(a, b, c))) / (2 * a);
                }
                else
                {
                    cout << 2 << endl;    
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(4);
                    cout << (-b  - sqrt(discr(a, b, c))) / (2 * a) << endl;    
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(4);
                    cout << (-b  + sqrt(discr(a, b, c))) / (2 * a) << endl;    
                }
            }
        }
    }
    return 0;
}