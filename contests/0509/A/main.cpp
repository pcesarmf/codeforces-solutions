// https://codeforces.com/contest/509/problem/A

#include <iostream>

using namespace std;

int main() {
	int n;
	int a[10][10];

	cin >> n;

	for (int i = 0; i < n; i++) {
		a[0][i] = 1;
	}

	for (int i = 1; i < n; i++) {
		a[i][i] = a[i - 1][i] + a[i - 1][i];
		for (int j = i + 1; j < n; j++) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}

	cout << a[n - 1][n - 1] << endl;

	return 0;
}
