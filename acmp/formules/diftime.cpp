#include <iostream>

using namespace std;

int main()
{
	int n, s, h, m;
	cin >> n;
	s = 45 * n + n / 2 * 5 +(n-1) / 2 * 15;
	h = 9 + s / 60;
    m = s % 60;
	cout << h << " " << m;
	return 0;
}

