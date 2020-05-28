#include <iostream>
#include <cmath>


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
        cout << "Any integer from [-1000;1000]";
    }
    else
    {
        if ((a == 0) && (b == 0) && (c != 0))
        {
            cout << "No roots";
        }
        else
        {
            if ((a == 0) && (b != 0))
            {
                if ((-c / b) == trunc(-c / b) && (abs(-c / b) <= 1000)) {
                    cout << "One root" << endl;
                    cout << -c / b;
                }
                else
                {
                    cout << "One root not match restrictions";
                }
            }
            else
            {
                if (discr(a, b, c) < 0)
                {
                    cout << "No roots";
                }
                else if (discr(a, b, c) == 0)
                {
                    x1 = (-b + sqrt(discr(a, b, c))) / (2 * a);
                    if ((x1 == trunc(x1) && (abs(x1) <= 1000))) {
                        cout << "One root" << endl;
                        cout << x1;
                    }
                    else {
                        cout << "One root not match restrictions";
                    }

                }
                else
                {
                    x1 = (-b - sqrt(discr(a, b, c))) / (2 * a);
                    x2 = (-b + sqrt(discr(a, b, c))) / (2 * a);
                    if ((x1 == trunc(x1)) && (abs(x1) <= 1000) && 
                        (x2 == trunc(x2)) && (abs(x2) <= 1000)) 
                    {
                        cout << "Two roots" << endl;
                        cout << x1 << " " << x2 << endl;
                    }
                    else
                    {
                        if ((x1 == trunc(x1) && (abs(x1) <= 1000))) {
                            cout << "One root" << endl;
                            cout << x1 << endl;
                            cout << "And one root not match restrictions" << endl;
                        }
                        else
                        {
                            if ((x2 == trunc(x2) && (abs(x2) <= 1000))) {
                                cout << "One root" << endl;
                                cout << x2 << endl;
                                cout << "And one root not match restrictions" << endl;
                            }
                            else {
                                cout << "Two roots not match restrictions";
                            }
                        }
                    }
                    
                }
            }
        }
    }
    return 0;
}