/*
Print boundary elements of the matrix

I/P:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15

O/P:
1 2 3 4 5 10 15 14 13 12 11 6

Boundary case
one row : 1 2 3 4 5

one col : 1
		  2
		  3
		  4

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int m; cin >> m;

	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	//first row
	for (int i = 0; i < m; i++)
		cout << arr[0][i] << " ";

	//last col
	for (int i = 1; i < n; i++)
		cout << arr[i][m - 1] << " ";

	//last row
	if (n > 1) {
		for (int i = m - 2; i >= 0; i--) {
			cout << arr[n - 1][i] << " ";
		}
	}

	//first col
	if (m > 1) {
		for (int i = n - 2; i > 0; i--) {
			cout << arr[i][0] << " ";
		}
	}

	return 0;
}