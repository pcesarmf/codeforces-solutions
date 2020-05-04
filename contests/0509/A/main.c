// https://codeforces.com/contest/509/problem/A

#include <stdio.h>

int main() {
	int n;
	int a[10][10];
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		a[0][i] = 1;
	}

	for (i = 1; i < n; i++) {
		a[i][i] = a[i - 1][i] + a[i - 1][i];
		for (j = i + 1; j < n; j++) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}

	printf("%d\n", a[n - 1][n - 1]);

	return 0;
}
