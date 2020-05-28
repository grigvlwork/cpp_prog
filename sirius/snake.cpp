#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0) {
			for (int j = i * m; j < (i + 1) * m; ++j)
			{
				cout.width(3);
				cout << j;
			}
		}
		else
		{
			for (int j = (i + 1) * m - 1; j >= i * m; --j)
			{
				cout.width(3);
				cout << j;
			}
		}
		cout << endl;
	}
}
