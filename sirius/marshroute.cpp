#include <iostream>
#include <string>

using namespace std;


int main()
{
    int a[250][250] = { 0 };
    int b[250][250] = { 0 };
    string s;
    int i, j, n, k;
    cin >> n;
    cin.ignore(32767, '\n');
    for (i = 0; i < n; ++i) {
        getline(cin, s);
        for (j = 0; j < n; ++j) a[i][j] = (int) s.at(j) - 48;
    }      
    b[0][0] = a[0][0];
    for (k = 1; k < n; ++k) {
        b[k][0] = a[k - 1][0] + a[k][0];
        b[0][k] = a[0][k - 1] + a[0][k];
        for (i = 1; i < k; ++i) {
            b[k][i] = b[k][i - 1] < b[k - 1][i] ? b[k][i - 1] : b[k - 1][i];
            b[i][k] = b[i][k - 1] < b[i - 1][k] ? b[i][k - 1] : b[i - 1][k];
        }
        b[k][k] = b[k - 1][k] < b[k][k - 1] ? b[k - 1][k] : b[k][k - 1];
    }
    i = j = n - 1;
    while ((i != 0) || (j != 0)) {
        b[i][j] = -1;
        if (i > 0) {
            if (j > 0) {
                if (b[i - 1][j] < b[i][j - 1]) --i;
                else --j;
            }
            else --i;
        }
        else --j;
    }
    b[0][0] = -1;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            if (b[i][j] == -1)
                cout << "#";
            else cout << "-";
        cout << endl;
    }
    return 0;
}

