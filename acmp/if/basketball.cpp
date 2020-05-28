#include <iostream>

using namespace std;

int main()
{
    int a, b, suma, sumb;
    suma = sumb = 0;
    for (int i = 0; i < 4; ++i)
    {
        cin >> a >> b;
        suma += a;
        sumb += b;
    }
    if (suma > sumb) 
    {
        cout << 1;
    }
    else if (suma < sumb)
    {
        cout << 2;
    }
    else
    {
        cout << "DRAW";
    }
    return 0;
}