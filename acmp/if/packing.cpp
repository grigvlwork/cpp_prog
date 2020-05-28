#include <iostream>

using namespace std;

struct box
{
    long l, w, h;
};

int main()
{
    box b1, b2, c;
    cin >> b1.l >> b1.w >> b1.h; 
    cin >> b2.l >> b2.w >> b2.h; 
    cin >> c.l >> c.w >> c.h; 
    if (b1.l < b1.w) 
    {
        swap(b1.l, b1.w);
    }
    if (b2.l < b2.w) 
    {
        swap(b2.l, b2.w);
    }
    if (c.l < c.w) 
    {
        swap(c.l, c.w);
    }
    if (((b1.h + b2.h) <= c.h) && (max(b1.l, b2.l) <= c.l) && (max(b1.w, b2.w) <= c.w))
    {
        cout << "YES";
    }
    else if ((b1.h > c.h) || (b2.h > c.h))
    {
        cout << "NO";    
    }
    else
    {
        if ((((b1.l + b2.l) <= c.l) && (max(b1.w, b2.w) <= c.w)) ||
            (((b1.l + b2.l) <= c.w) && (max(b1.w, b2.w) <= c.l)) ||
            (((b1.w + b2.w) <= c.w) && (max(b1.l, b2.l) <= c.l)) ||
            (((b1.w + b2.w) <= c.l) && (max(b1.l, b2.l) <= c.w))) 
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        }
    return 0;
}