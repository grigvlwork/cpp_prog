#include <iostream>
#include <cstdlib>

using namespace std;

bool pawn(int x1, int y1, int x2, int y2)
{
    return (((y1 == 2) && ((y2 - y1) <= 2) && (x2 == x1)) || 
        ((y1 > 2) && ((y2 - y1) == 1)) && (x2 == x1));
}

bool king(int x1, int y1, int x2, int y2)
{
    return ((abs(x1 - x2) <= 1) && (abs(y1 - y2) <=1));
}

bool queen(int x1, int y1, int x2, int y2)
{
    return (((x1 == x2) && (y1 != y2)) || ((x1 != x2) && (y1 == y2)) ||
        (abs(x1 - x2) == abs(y1 - y2)));
}

bool bishop(int x1, int y1, int x2, int y2)
{
    return (abs(x1 - x2) == abs(y1 - y2));
}

bool knight(int x1, int y1, int x2, int y2)
{
    return ((abs(x1 - x2) * abs(y1 - y2)) == 2);
}

bool rook(int x1, int y1, int x2, int y2)
{
    return (((x1 == x2) && (y1 != y2)) || ((x1 != x2) && (y1 == y2)));
}

int main()
{
    int x1, y1, x2, y2, flag;
    string s1, s2;
    cin >> s1 >> s2;
    x1 = int(s1[0]) - 64;
    y1 = int(s1[1]) - 48;
    x2 = int(s2[0]) - 64;
    y2 = int(s2[1]) - 48;
    flag = 0;
    if(pawn(x1, y1, x2, y2)){
        cout << "Pawn" << endl;
        flag = 1;
    }
    if(king(x1, y1, x2, y2)){
        cout << "King" << endl;
        flag = 1;
    }
    if(queen(x1, y1, x2, y2)){
        cout << "Queen" << endl;
        flag = 1;
    }
    if(bishop(x1, y1, x2, y2)){
        cout << "Bishop" << endl;
        flag = 1;
    }
    if(knight(x1, y1, x2, y2)){
        cout << "Knight" << endl;
        flag = 1;
    }
    if(rook(x1, y1, x2, y2)){
        cout << "Rook" << endl;
        flag = 1;
    }
    if(flag == 0)
    {
        cout << "Nobody";
    }
    return 0;
}
