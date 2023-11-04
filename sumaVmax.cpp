#include <iostream>
#define MMAX 10
#define NMAX 10
using namespace std;
int main()
{
	int a[MMAX][NMAX], m, n, s, i, max, j;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	for (s = i = 0; i < m; i++)
	{
		for (max = j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
			if (a[i][j] > max)
				max = a[i][j];
		}
		s += max;
	}
	cout << "s = " << s;
	return 0;
}
