#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    if ((c1 == "black") &&
        (c2 == "black") &&
        (c3 == "green"))
    {
        cout << "black\nblack\nGREEN";
    }
    else if ((c1 == "black") &&
             (c2 == "black") &&
             (c3 == "GREEN"))
    {
        cout << "black\nyellow\nblack";
    }
    else if ((c1 == "black") &&
             (c2 == "yellow") &&
             (c3 == "black"))
    {
        cout << "red\nblack\nblack";
    }
    else if ((c1 == "red") &&
             (c2 == "black") &&
             (c3 == "black"))
    {
        cout << "red\nyellow\nblack";
    }
    else if ((c1 == "red") &&
             (c2 == "yellow") &&
             (c3 == "black"))
    {
        cout << "black\nblack\ngreen";
    }
    else if ((c1 == "black") &&
             (c2 == "YELLOW") &&
             (c3 == "black"))
    {
        cout << "black\nYELLOW\nblack";
    }
    else
    {
        cout << "error";
    }
    return 0;
}

