#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double h, a, b;
	cin >> h >> a >> b;
	if (h < a) cout << 1;
	else cout << ceil((h - a)/(a-b)) + 1;
	return 0;
}


