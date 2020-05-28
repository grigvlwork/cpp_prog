#include <iostream>
#include <cstdlib>

using namespace std;

void coeff(int a)
{
    if ((a != 0) && (abs(a) != 1))
    {       
        cout << a;
    }
    else if ((a != 0) && (a == -1))
    {
        cout << "-";
    }
}

int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    if ((a == 0) && (b == 0) && (c == 0))
    {
        cout << 0;    
    }
    else
    {
        if (a != 0) 
        {
            cout << a; 
        }
        if (b != 0)
        {
            if ((a != 0) && (b > 0))
            {
                cout << "+";
            }
            coeff(b);
            cout << "x";
        }
        if (c != 0)
        {
            if (((a != 0) || (b != 0))  && (c > 0))
            {
                cout << "+";
            }
            coeff(c);
            cout << "y";
        }
    }     
    return 0;
}