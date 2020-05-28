#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct key
{
	int adress, weight;
};

struct node
{
	key k;
	int up_adr;
};

vector<node> v;
int a[250][250] = { 0 };

bool tree_sort(node& n1, node& n2)
{
	if (n1.k.adress == n2.k.adress)
		return n1.k.weight < n2.k.weight;
	else
		n1.k.adress > n2.k.adress;
}

void build_tree(int n, int x, int y, int upx, int upy, int val)
{
	node new_node;
	int weight = val + a[x][y];
	int n1 = n - 1;
	if ((x == 0) && (y == 0))
	{
		new_node.k.adress = 0;
		new_node.k.weight = a[0][0];
		new_node.up_adr = -1;
		v.push_back(new_node);
		build_tree(n, 0, 1, 0, 0, a[0][0]);
		build_tree(n, 1, 0, 0, 0, a[0][0]);
	}
	else
	{
		new_node.k.adress = x * n + y;
		new_node.k.weight = weight;
		new_node.up_adr = upx * n + upy;
		v.push_back(new_node);
		if (x < n1)
		{
			if (y < n1)
			{
				build_tree(n, x, y + 1, x, y, weight);
				build_tree(n, x + 1, y, x, y, weight);
			}
			else
				build_tree(n, x + 1, y, x, y, weight);	
		}
		else if (y < n1)
			build_tree(n, x, y + 1, x, y, weight);
	}
}


int main()
{
	string s;
	vector<node>::iterator it_node;
	char c[250][250];
    int i, j, n, k;
    cin >> n;
    cin.ignore(32767, '\n');
    for (i = 0; i < n; ++i) {
        getline(cin, s);
        for (j = 0; j < n; ++j) a[i][j] = (int) s.at(j) - 48;
    }
	build_tree(n, 0, 0, 0, 0, 0);
	sort(v.begin(), v.end(), tree_sort);
	k = n * n - 1;
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j) c[i][j] = '-';
	for (it_node = v.begin(); it_node != v.end(); ++it_node)
	{
		if ((*it_node).k.adress == k)
		{
			c[k / n][k % n] = '#';
			k = (*it_node).up_adr;
		}
	}
	c[0][0] = '#';
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j) cout << c[i][j];
		cout << endl;
	} 
    return 0;
}